class Solution {
public:
    long long sumAndMultiply(int n) {

        if(n==0){
            return 0;
        }else{

        string s = to_string(n);
        string non_zero_string;

        for(char c:s){
            if(c!='0'){
                non_zero_string += c;
            }
        }

        long long int str_sum=0;
        long long int digit = stoi(non_zero_string);

        for(char c:non_zero_string){
            str_sum += (c - '0');
        }

        return digit*str_sum;
        
        }

    }
};