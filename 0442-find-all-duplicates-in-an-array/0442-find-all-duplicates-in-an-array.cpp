class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        vector<int> result;

        for(auto&f:freq){
            if(f.second==2){
                result.push_back(f.first);
            }
        }

        return result;
    }
};