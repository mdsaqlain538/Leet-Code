class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        if(stones.size()==1){
            return stones.at(0);
        }

        for(int i=0;i<stones.size();i++){

            sort(stones.begin(),stones.end(),greater<>());

            int x = stones.at(0);

            int y = stones.at(1);

            if(x==y){
                stones[0] = 0;
                stones[1] = 0;
            }else{
                stones[0] = x-y;
                stones[1] = 0;
            }
        }

        return stones[0];

    }
};