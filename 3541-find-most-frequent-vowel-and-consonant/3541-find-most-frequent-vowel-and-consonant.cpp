class Solution {
public:
    int maxFreqSum(string s) {
        
        vector<char> vowels;
        vector<char> consonants;

        for(char c:s){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                vowels.push_back(c);
            }else{
                consonants.push_back(c);
            }
        }

        map<char,int> vfreq;
        map<char,int> cfreq;

        for(char c:vowels){
            vfreq[c]++;
        }


        for(char c:consonants){
            cfreq[c]++;
        }

        int max1=0,max2=0;

        for(auto&f:vfreq){
            max1 = max(max1,f.second);
        }


        for(auto&c:cfreq){
            max2 = max(max2,c.second);
        }

        return max1+max2;
    }
};