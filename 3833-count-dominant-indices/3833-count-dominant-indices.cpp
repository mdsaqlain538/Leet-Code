class Solution {
public:
    int average_counter(vector<int>&nums){

        int sum=0, n=nums.size();

        for(int x: nums){
            sum+=x;
        }
        return sum/n;
    }
    int dominantIndices(vector<int>& nums) {

        vector<int> subarray;

        int count=0;

        for(int i=0;i<nums.size()-1;i++){

            subarray = vector<int>(nums.begin() + i + 1, nums.end());

            int y = average_counter(subarray);

            if(nums.at(i)>y){
                count++;
            }
            
        }
        return count;
    }
};