class Solution {
public:
    int smallestBalancedIndex(vector<int>& nums) {

        vector<long long int> balanced_ind;
        int n = nums.size();
        
        unsigned long long sum = 0, right_product = 1;

        for(long long int i=0;i<nums.size();i++){

            sum = (sum + nums[i]);

        }

        for(long long int i=n-1;i>0;i--){

            sum = sum - nums.at(i);

            if(right_product>sum){
                return -1;
            }

            if(sum==right_product){
                return i;
            }

            right_product = right_product * nums.at(i);

        }

        return -1;
    
    }
};