class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        vector<int> max_array;
        vector<int> min_array;

        int max = nums.at(0);
        
        for(int i=0;i<nums.size();i++){

            if(i==0){
                max_array.push_back(max);
            }else{

                if(max<nums.at(i)){
                    max = nums.at(i);
                    max_array.push_back(max);
                }else{
                    max_array.push_back(max);
                }
            }
        }

        std::reverse(nums.begin(),nums.end());

        int min = nums.at(0);

        for(int i=0;i<nums.size();i++){

            if(i==0){
                min_array.push_back(min);
            }else{

                if(min>nums.at(i)){
                    min = nums.at(i);
                    min_array.push_back(min);
                }else{
                    min_array.push_back(min);
                }
            }
        }

        std::reverse(min_array.begin(),min_array.end());

        vector<int> score;

        for(int i=0;i<nums.size();i++){
            if((max_array.at(i)-min_array.at(i))<=k){
                score.push_back(i);
            }
        }

        if(score.size()==0){
            return -1;
        }

        return score.at(0);
    }
};