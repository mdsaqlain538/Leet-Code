class Solution {
public:
    int mirrorFrequency(string s) {

        char alpha[26],mirror_alpha[26];

        int i,k=0,l=0;

        map<char,int> freq;

        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }

        for (i = 97; i <= 122; i++) {
            alpha[k] = (char) i;
            k++;
        }

        for (i = 122; i>=97; i--) {
            mirror_alpha[l] = (char) i;
            l++;
        }

        map<char,char> alpha_map;

        for(int i=0;i<26;i++){
            alpha_map[alpha[i]] = mirror_alpha[i];
        }

        char numbers[10], mirror_numbers[10];

        for(int i=0;i<=9;i++){
            char c = i + '0';
            numbers[i] = c;
        }

        int idx = 0;

        for(int i=9;i>=0;i--){
            char c = i + '0';
            mirror_numbers[idx] = c;
            idx++;
        }
        
        map<char,char> number_map;

        for(int i=0;i<=9;i++){
            number_map[numbers[i]] = mirror_numbers[i];
        }

        map<char,int> visit;

        int result=0;

        for(auto &f: freq){

            auto it = visit.find(f.first);
            auto ti = visit.find(alpha_map[f.first]);
            auto jt = visit.find(number_map[f.first]);

            if(it!=visit.end() || ti!=visit.end() || jt!=visit.end()){
                //donthg
            }else{
                visit[f.first]++;

                //actual code
                if(isalpha(f.first)){
                    
                    int freq_c = freq[f.first];
                    int freq_m = freq[alpha_map[f.first]];
    
                    int abs_result = abs(freq_c-freq_m);
    
                    result  = result + abs_result;
                }else{
                    int freq_c = freq[f.first];
                    int freq_m = freq[number_map[f.first]];
    
                    int abs_result = abs(freq_c-freq_m);
    
                    result  = result + abs_result;
                }
            }
        }

        return result;
    }
};