class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();
        
        sort(nums.begin(),nums.end());

        return (nums.at(n-1)-1)*(nums.at(n-2)-1);
    }
};