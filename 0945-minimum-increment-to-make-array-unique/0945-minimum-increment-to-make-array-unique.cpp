class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int result = 0;

        for(int i=0;i<nums.size()-1;i++){

            if(nums.at(i+1)<=nums.at(i)){
                result = result + (nums.at(i)+1)-(nums.at(i+1));
                nums.at(i+1) = nums.at(i+1) + (nums.at(i)+1)-(nums.at(i+1)); 
            }
        }

        return result;
    }
};