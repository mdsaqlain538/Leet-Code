class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        map<int,string> freq;

        for(int i=0;i<names.size();i++){
            freq[heights[i]] = names[i];
        }

        vector<string> result;

        for(auto&f:freq){
            result.push_back(f.second);
        }

        reverse(result.begin(),result.end());

        return result;
    }
};