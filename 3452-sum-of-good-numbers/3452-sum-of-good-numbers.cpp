class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {

        int result = 0;

        for(int i=0;i<nums.size();i++){

            int left = 0, right = 0;

            if(i-k>=0){
                left = nums.at(i-k);
            }
            if(i+k<=nums.size()-1){
                right = nums.at(i+k);
            }

            if(left==0 && right==0){
                result = result + nums.at(i);
            }else if(left==0 && right!=0){
                if(nums.at(i)>right){
                    result = result + nums.at(i);
                }
            }else if(left!=0 && right==0){
                if(nums.at(i)>left){
                    result = result + nums.at(i);
                }
            }else if(left!=0 && right!=0){
                if(nums.at(i)>left && nums.at(i)>right){
                    result = result + nums.at(i);
                }
            }

        }

        return result;
    }
};


