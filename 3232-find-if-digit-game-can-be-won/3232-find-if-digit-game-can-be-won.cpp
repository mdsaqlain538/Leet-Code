class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        
        int sd = 0, md = 0;

        for(int i=0;i<nums.size();i++){
            if(nums.at(i)<=9){
                sd = sd + nums.at(i);
            }else{
                md = md + nums.at(i);
            }
        }

        if(sd==md){
            return false;
        }else{
            return true;
        }
    }
};