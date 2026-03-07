class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        
        int result = 0;

        map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        vector<int> max;

        for(auto &f:freq){
            max.push_back(f.second);
        }

        int mf = *max_element(max.begin(),max.end());

        cout<<mf<<endl;

        for(auto &f:freq){
            if(f.second==mf){
                result = result + mf;
            }
        }

        return result;
    }
};