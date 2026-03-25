class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {

        int idx = 0;
        map<int,int> banfinder;

        for(int i=0;i<banned.size();i++){
            banfinder[banned.at(i)] = idx;
            idx++;
        }

        int sum = 0, count = 0;
        vector<int> values;

        for(int i=1;i<=n;i++){

            int x = i;

            auto it = banfinder.find(x);

            if(it!=banfinder.end()){
                //donthg
            }else{

                sum = sum + i;

                if(sum<=maxSum){
                
                    values.push_back(i);

                }
            }
        }

        return values.size();
    }
};