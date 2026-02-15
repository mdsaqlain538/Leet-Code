class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        int x = 97;
        
        string res;

        map<int,char> val;

        for(int i = 0; i < 26; i++) {
            val[i] = 'z' - i;
        }

        for(int i=0;i<words.size();i++){

            int sum = 0;

            string s = words[i];

            for(int j=0;j<s.size();j++){

                sum = sum + weights[(s[j]-0)-x];

            }

            int mod = sum%26;

            res = res + val[mod];

        }
        
        return res;
    }
};