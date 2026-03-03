class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());

        int low = 0, high = nums.size()-1;

        vector<double> avg;

        while(low<high){

            double x = double(nums.at(low) + nums.at(high))/2;

            avg.push_back(x);

            low++;

            high--;
        }

        return *min_element(avg.begin(),avg.end());
    }
};