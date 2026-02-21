class Solution {
public:
    int maxProfit(vector<int>& prices) {

        vector<int> result;

        if(prices.size()==1){
            return 0;
        }else{

            int min_val = prices.at(0);
            int result = INT_MIN;

            for(int i=1;i<prices.size();i++){
                result = max(result, prices.at(i)-min_val);
                min_val = min(min_val,prices.at(i));
            }

            if(result==-1){
                return 0;
            }else{
                return result;
            }

        }

    }
};
