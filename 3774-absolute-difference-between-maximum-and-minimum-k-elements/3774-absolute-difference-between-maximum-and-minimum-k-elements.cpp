class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        int largest_elements_sum = 0;
        int smallest_elements_sum = 0;

        int n = nums.size();
        int k_small=k, k_large=k;

        for(int i=n-1;i>=0;i--){
            if(k_large>0){
                largest_elements_sum = largest_elements_sum + nums[i];
                k_large--;
            }else{
                break;
            }
        }

        for(int i=0;i<n;i++){
            if(k_small>0){
                smallest_elements_sum = smallest_elements_sum + nums[i];
                k_small--;
            }else{
                break;
            }
        }

        return abs(largest_elements_sum-smallest_elements_sum);

    }
};