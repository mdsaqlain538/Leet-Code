class Solution {
public:
    int fun(int x){

        string s = to_string(x);

        int result;

        for(int i=0;i<s.size();i++){
            result = result + s[i]-'0';
        }
        return result;
    }
    int minElement(vector<int>& nums) {
        
        vector<int> digit_sum;

        for(int i=0;i<nums.size();i++){
            digit_sum.push_back(fun(nums.at(i)));
        }

        return *min_element(digit_sum.begin(),digit_sum.end());

    }
};