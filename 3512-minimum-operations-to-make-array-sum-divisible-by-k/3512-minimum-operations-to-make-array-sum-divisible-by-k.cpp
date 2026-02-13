class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int sum = 0;

        for(int i=0;i<nums.size();i++){
            sum+=nums.at(i);
        }

        if(sum%k==0){
            return 0;
        }else{

            int count =0;

            while(sum%k!=0){
                sum=sum-1;
                count++;
            }

            return count;            
        }

    }
};