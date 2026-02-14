class Solution {
public:
    vector<int> minOperations(string boxes) {

        vector<int> result;
        
        for(int i=0;i<boxes.size();i++){

            int sum = 0;

            for(int j=0;j<boxes.size();j++){

                if(boxes.at(j)=='1' && i!=j){
                    sum = sum + abs(j-i);
                }

            }
            result.push_back(sum);
        }

        return result;
    }
};
