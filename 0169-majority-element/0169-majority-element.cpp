class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int> freq;

        for(int x:nums){
            freq[x]++;
        }

        int n = nums.size();

        int x = ceil(n/2)+1;

        for(auto y:freq){

            if(y.second>=x){
                return y.first;
            }
        }

        return {};
    }
};