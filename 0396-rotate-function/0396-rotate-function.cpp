class Solution {
public:
    int compute_sum(vector<int>& nums){

        int n = nums.size();

        int sum=0;

        for(int i=0;i<n;i++){
            sum = sum + (nums.at(i));
        }

        return sum;
    }
    int maxRotateFunction(vector<int>& nums) {

        int n = nums.size();

        vector<int> F;

        int temp_sum = 0;

        for(int i=0;i<nums.size();i++){

            temp_sum = temp_sum + (nums.at(i)*i);

        }

        F.push_back(temp_sum);

        //F[0]

        int array_sum = compute_sum(nums);

        int result = F.at(0);

        for(int i=1;i<nums.size();i++){
            int temp_f = F.at(i-1) + array_sum - (n * nums.at(n-i));
            F.push_back(temp_f);
            result = max(result,F.at(i)); 
        }

        return result;

    }
};

