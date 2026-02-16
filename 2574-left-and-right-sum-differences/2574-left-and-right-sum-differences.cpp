class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector<int> left;
        vector<int> right;

        int left_sum = 0;

        for(int i=0;i<nums.size();i++){
            if(i==0){
                left.push_back(0);
            }else{
                left_sum = left_sum + nums.at(i-1);
                left.push_back(left_sum);
            }
        }

        reverse(nums.begin(),nums.end());

        int right_sum = 0;

        for(int i=0;i<nums.size();i++){
            if(i==0){
                right.push_back(0);
            }else{
                right_sum = right_sum + nums.at(i-1);
                right.push_back(right_sum);
            }
        }

        reverse(right.begin(),right.end());

        vector<int> result;

        for(int i=0;i<right.size();i++){
            result.push_back(abs(left.at(i)-right.at(i)));
        }

        return result;

    }
};