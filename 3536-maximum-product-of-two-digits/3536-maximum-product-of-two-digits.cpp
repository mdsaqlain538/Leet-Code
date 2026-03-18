class Solution {
public:
    int maxProduct(int n) {
        
        string s = to_string(n);

        vector<int> result;

        for(int i=0;i<s.size();i++){
            result.push_back(s[i]-'0');
        }

        sort(result.begin(),result.end(),greater<>());

        return result.at(0)*result.at(1);

    }
};