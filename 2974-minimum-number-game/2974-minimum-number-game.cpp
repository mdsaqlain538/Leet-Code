class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            int temp = nums.at(i);
            nums.at(i) = nums.at(i+1);
            nums.at(i+1) = temp;
            i = i + 1;
        }
        
        return nums;
    }
};