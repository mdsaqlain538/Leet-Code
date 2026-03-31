class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){

            for(int j=i+1;j<nums.size();j++){

                if(nums.at(i)==0 && nums.at(j)!=0){
                    swap(nums.at(i),nums.at(j));
                    break;
                }
            }
        }
    }
};