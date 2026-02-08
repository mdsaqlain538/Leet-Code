class Solution {
public:
    bool checkDivisibility(int n) {
        
        string s = to_string(n);

        vector<long long int> numbers;

        for(char c:s){
            numbers.push_back(c-'0');
        }

        long long int sum=0,mul=1;

        for(int x:numbers){
            sum = sum + x;
            mul = mul * x;
        }

        long long int final = sum+mul;

        if(n%final==0){
            return true;
        }else{
            return false;
        }

    }
};