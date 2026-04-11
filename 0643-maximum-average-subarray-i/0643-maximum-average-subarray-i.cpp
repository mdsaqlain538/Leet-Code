class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        int sum=0,maxSum=0;

        for(int i=0;i<k;i++){
            sum = sum + nums.at(i);
        }

        maxSum = sum;

        for(int i=k;i<nums.size();i++){

            sum = sum + nums.at(i);
            sum = sum - nums.at(i-k);

            maxSum = max(sum,maxSum);

        }

        return (double) maxSum/k;

    }
};