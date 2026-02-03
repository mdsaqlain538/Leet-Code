class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        
        int n = nums.size();
        int bitwise=0;

        for(int i=0;i<n;i++){
            if((nums.at(i))%2==0){
                bitwise = bitwise | nums.at(i);
            }
        }
        return bitwise;
    }
};