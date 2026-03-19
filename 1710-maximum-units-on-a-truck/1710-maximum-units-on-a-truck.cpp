class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        int result = 0, flag = 0;
        
        sort(boxTypes.begin(), boxTypes.end(), [](vector<int>& a, vector<int>& b) { 
            return a[1] > b[1]; 
        });

        for(int i=0;i<boxTypes.size();i++){

            if(flag == 0){

                    if(truckSize-boxTypes[i][0]>=0){

                        result = result + (boxTypes[i][1] * boxTypes[i][0]);

                        truckSize = truckSize - boxTypes[i][0];
                    }else{

                        result = result + (boxTypes[i][1] * truckSize);
                        flag++;
                    }

            }

        }

        return result;
    }
};