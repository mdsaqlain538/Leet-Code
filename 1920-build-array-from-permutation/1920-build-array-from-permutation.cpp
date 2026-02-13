class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        
        vector<int> result;

        for(int i=0;i<nums.size();i++){
            int x = nums.at(i);
            result.push_back(nums.at(x));
        }

        return result;
    }
};