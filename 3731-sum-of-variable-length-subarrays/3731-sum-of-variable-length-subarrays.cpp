class Solution {
public:
    int subarraySum(vector<int>& nums) {
        
        int n = nums.size();

        int final = 0;
        
        for(int i = 0; i < n; i++){

            int start = max(0, i - nums[i]);

            int end = i;

            vector<int> subArray(nums.begin() +start, nums.begin() + end+1);

            int sum = accumulate(subArray.begin(), subArray.end(), 0);

            final = final + sum;

        }
        return final;

    }
};