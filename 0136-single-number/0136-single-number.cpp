class Solution {
public:
    int singleNumber(vector<int>& nums) {

        map<int,int> freq;
        
        for(int i=0;i<nums.size();i++){
            freq[nums.at(i)]++;
        }

        for(auto& f : freq){
            if(f.second==1){
                return f.first;
            }
        }
        return {};
    }
};