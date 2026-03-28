class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        
        int result = 0;
        for(int i=0;i<words.size();i++){

            string s = words[i];
            int count = 0;

            for(int j=0;j<pref.size();j++){

                if(pref.size()<=s.size() && pref[j]==s[j]){
                    count++;
                }
            }

            if(count==pref.size()){
                result++;
            }
        }

        return result;
    }
};