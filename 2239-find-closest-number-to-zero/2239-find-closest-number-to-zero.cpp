class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

        int pointer = 0;
        int min_value = INT_MAX;
        int max_value = INT_MIN;
        
        for(int i=0;i<nums.size();i++){

            int distance = abs(nums.at(i)-pointer);

            min_value = min(min_value,distance);

        }

        for(int i=0;i<nums.size();i++){

            if(abs(nums.at(i)-pointer)==min_value){
                max_value = max(max_value,nums.at(i));
            }
        }

        return max_value;
    }
};
