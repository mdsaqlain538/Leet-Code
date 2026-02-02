class Solution {
public:
    long long removeZeros(long long n) {
        
        string s = to_string(n);
        string non_zero_string;

        for(char c:s){
            if(c!='0'){
                non_zero_string+=c;
            }
        }

        long long int digit = stoll(non_zero_string);

        return digit;

    }
};