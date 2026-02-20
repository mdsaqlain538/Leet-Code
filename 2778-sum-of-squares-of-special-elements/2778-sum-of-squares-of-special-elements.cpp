class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        
        int result = 0;
        int n = nums.size();

        for(int i=1;i<=nums.size();i++){
            if(n%i==0){
                result = result + (nums.at(i-1)*nums.at(i-1));
            }
        }
        return result;
    }
};