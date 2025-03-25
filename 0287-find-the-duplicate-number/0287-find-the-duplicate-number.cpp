class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int res;
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
             if(nums[i]==nums[i+1]){
                res = nums[i];
                break;
             }
        }
        return res;
    }
};