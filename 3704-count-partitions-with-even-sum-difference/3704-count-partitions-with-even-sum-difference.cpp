class Solution {
public:
    int countPartitions(vector<int>& nums) {

        int n = nums.size();

        int sum_left, sum_right;

        int count=0;

        for(int i = 0; i < n-1; i++){

            vector<int> left(nums.begin() + 0, nums.begin() + i+1);

            int left_sum = reduce(left.begin(), left.end(), 0);

            vector<int> right(nums.begin()+ (i+1), nums.begin() + n);

            int right_sum = reduce(right.begin(), right.end(), 0);

            if((left_sum-right_sum)%2==0)
                count++;

        }

        return count;
        
    }
};