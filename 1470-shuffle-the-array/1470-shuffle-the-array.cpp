class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> x;

        vector<int> y;

        for(int i=0;i<nums.size()/2;i++){
            x.push_back(nums.at(i));
        }

        for(int j=nums.size()/2;j<nums.size();j++){
            y.push_back(nums.at(j));
        }

        vector<int> result;

        for(int k=0;k<nums.size()/2;k++){
            result.push_back(x.at(k));
            result.push_back(y.at(k));
        }

        return result;

    }
};