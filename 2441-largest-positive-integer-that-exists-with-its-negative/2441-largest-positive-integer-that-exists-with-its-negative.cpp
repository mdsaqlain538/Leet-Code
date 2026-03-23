class Solution {
public:
    int findMaxK(vector<int>& nums) {
        
        map<int,int> negative_map;
        int idx = 0;
        vector<int> positive;

        for(int i=0;i<nums.size();i++){
            if(nums.at(i)<0){
                negative_map[abs(nums.at(i))] = idx;
                idx++; 
            }else{
                positive.push_back(nums.at(i));
            }
        }

        sort(positive.begin(),positive.end(),greater<>());

        for(int i=0;i<positive.size();i++){

            int k = positive.at(i);

            auto it = negative_map.find(k);

            if(it!=negative_map.end()){
                return k;
            }

        }

        return -1;


    }
};