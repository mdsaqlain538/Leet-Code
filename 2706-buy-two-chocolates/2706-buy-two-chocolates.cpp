class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());

        int cost = prices.at(0) + prices.at(1);

        if(cost<=money){
            return money-cost;
        }

        return money;

    }
};