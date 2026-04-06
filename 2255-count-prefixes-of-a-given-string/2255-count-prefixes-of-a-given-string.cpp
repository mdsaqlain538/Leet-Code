class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int result = 0;

        for(int i=0;i<words.size();i++){

            string t = words[i];

            int k=0;

            for(int j=0;j<t.size();j++){

                if(t[j]==s[k]){
                    k++;
                }
            }

            if(k==t.size()){
                result++;
            }
        }
        return result;
    }
};