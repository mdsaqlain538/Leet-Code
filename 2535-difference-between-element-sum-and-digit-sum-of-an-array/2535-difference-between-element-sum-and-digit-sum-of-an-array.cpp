class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        
        int sum = 0, digit_sum = 0;
        string s;

        for(int i=0;i<nums.size();i++){

            sum = sum + nums.at(i);
            string c = to_string(nums.at(i));
            s = s + c;

        }

        for(char t:s){
            digit_sum = digit_sum + (t-'0');
        }

        return abs(sum-digit_sum);
    }
};