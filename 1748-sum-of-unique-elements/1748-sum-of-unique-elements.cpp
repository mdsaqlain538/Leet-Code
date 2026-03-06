class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        
        map<int,int> freq;

        for(int x: nums){
            freq[x]++;
        }

        int result = 0;

        for(auto &f : freq){
            if(f.second==1){
                result = result + f.first;
            }
        }

        return result;
    }
};