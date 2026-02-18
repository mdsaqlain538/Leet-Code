class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        vector<int> result;

        for(int i=0;i<prices.size();i++){

            int count = 0;

            for(int j=0;j<prices.size();j++){

                if(j>i && prices[j]<=prices[i]){
                    count++;
                    result.push_back(prices.at(i)-prices.at(j));
                    break;
                }
            }

            if(count==0){
                result.push_back(prices.at(i));
            }

        }

        return result;
    }
};