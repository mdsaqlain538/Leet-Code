class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        
        int count = 0;

        for(int i=0;i<nums.size();i++){
            if(nums.at(i)%2==0){
                count++;
            }
        }

        vector<int> result;

        for(int i=0;i<count;i++){
            result.push_back(0);
        }

        for(int i=count;i<nums.size();i++){
            result.push_back(1);
        }

        return result;
    }
};