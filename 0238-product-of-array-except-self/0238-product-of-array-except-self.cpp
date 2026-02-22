class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> left;
        vector<int> right;

        int mul = 1;

        left.push_back(1);

        for(int i=0;i<nums.size()-1;i++){

            mul = mul * nums.at(i);

            left.push_back(mul);
        }

        reverse(nums.begin(),nums.end());

        right.push_back(1);

        int mal = 1;

        for(int i=0;i<nums.size()-1;i++){

            mal = mal * nums.at(i);

            right.push_back(mal);
        }

        reverse(right.begin(),right.end());

        vector<int> result;

        for(int i=0;i<nums.size();i++){
            result.push_back(left.at(i)*right.at(i));
        }

        return result;
    }
};