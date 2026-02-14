class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        vector<int> result;
        map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums.at(i)]++;
        }

        for(auto& x:mp){
            if(x.second==2){
                result.push_back(x.first);
            }
        }

        return result;
    }
};