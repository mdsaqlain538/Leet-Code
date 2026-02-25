class Solution {
public:
    int minimumCost(vector<int>& cost) {

        int n = cost.size();

        if(n<=2){

            int result = 0;

            for(int i=0;i<cost.size();i++){
                result = result + cost[i];
            }
            return result;
        }else{

            int result = 0;

            sort(cost.begin(),cost.end(),greater<int>());

            for(int i=0;i<cost.size();i++){

                if(i%3==2){
                    //donthg
                }else{
                    result = result + cost[i];
                }
            }
            return result;
        }
    }
};
