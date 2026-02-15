class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int start = 0, sum = 0;
        vector<int> result;

        result.push_back(start);

        for(int i=0;i<gain.size();i++){

            sum = sum + gain[i];

            result.push_back(sum);
        }

        return *max_element(result.begin(),result.end());

    }
};