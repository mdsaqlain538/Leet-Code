class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {

        int n = nums.size();

        stack<int> stk;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            stk.push(nums.at(i));
        }

        int a = stk.top();

        stk.pop();

        int b = stk.top();

        int c = nums.at(0);

        return a+b-c;
    }
};