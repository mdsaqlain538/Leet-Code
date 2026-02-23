class Solution {
public:
    int minOperations(vector<int>& nums) {

        int min_op = 0, counter = 1;
        
        for(int i=0;i<nums.size()-1;i++){

            if(nums.at(i)>=nums.at(i+1)){

                int diff = nums.at(i) - nums.at(i+1);

                nums.at(i+1) = nums.at(i+1) + (diff) + counter;

                min_op = min_op + (diff) + counter;

            }
        }

        return min_op;
    }
};