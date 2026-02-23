class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> left;
        vector<int> right;

        int left_mul = 1;

        left.push_back(1);

        for(int i=0;i<nums.size()-1;i++){

            left_mul = left_mul * nums.at(i);

            left.push_back(left_mul);
        }

        reverse(nums.begin(),nums.end());

        right.push_back(1);

        int right_mul = 1;

        for(int i=0;i<nums.size()-1;i++){

            right_mul = right_mul * nums.at(i);

            right.push_back(right_mul);
        }

        reverse(right.begin(),right.end());

        vector<int> result;

        for(int i=0;i<nums.size();i++){
            result.push_back(left.at(i)*right.at(i));
        }

        return result;
    }
};