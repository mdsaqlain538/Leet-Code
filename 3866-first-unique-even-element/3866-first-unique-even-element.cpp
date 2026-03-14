class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {

        map<int,int> freq;

       for(int x : nums){
            if(x%2==0){
                freq[x]++;
            }
       }

       for(int x: nums){

            if(freq[x]==1){
                return x;
            }
            
       }

       return -1;

    }
};