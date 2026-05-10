class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {

        vector<int> result;

        for(int i=0;i<nums.size();i++){
            result.push_back(nums.at(i));
        }

        reverse(nums.begin(),nums.end());

        int j=0;

        for(int i=nums.size();i<nums.size()*2;i++){
            result.push_back(nums.at(j));
            j++;
        }

        return result;
    }
};