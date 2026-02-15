class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        
        int max_val = INT_MIN, sum;

        for(int i=0;i<accounts.size();i++){

            int cal = 0;

            for(int j=0;j<accounts[i].size();j++){

                cal = cal + accounts[i][j];
            }

            sum = max(max_val,cal);
            max_val = sum;
            
        }
        return max_val;
    }
};