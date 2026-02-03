class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        
        int n = nums.size();

        if(n==1){
            return nums.at(0);
        }else{

            int os=0,es=0;

            for(int i=0;i<n;i++){

                if(i%2==0){
                    es+=nums.at(i);
                }else{
                    os+=nums.at(i);
                }
            }
            return es-os;
        }
        return 0;
    }
};