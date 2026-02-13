class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {

        vector<int> result;
        
        for(int i=0;i<order.size();i++){

            auto it = find(friends.begin(),friends.end(),order.at(i));

            if(it!=friends.end()){
                result.push_back(order.at(i));
            }

        }

        return result;
    }
};


