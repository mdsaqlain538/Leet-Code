class Solution {
public:
    char findTheDifference(string s, string t) {

        map<char,int> freq_ss;
        map<char,int> freq_ts;

        for(char c:s){
            freq_ss[c]++;
        }

        for(char c:t){
            freq_ts[c]++;
        }

        sort(s.begin(),s.end());

        sort(t.begin(),t.end());

        for(int i=0;i<t.size();i++){
            if(freq_ts[t[i]]!=freq_ss[t[i]]){
                return t[i];
            }
        }
        return {};
    }
};
