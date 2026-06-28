class Solution {
public:
    bool checkGoodInteger(int n) {
        
        string s;
        s = to_string(n);

        vector<int> numbers;

        int digitSum=0,squareSum=0;

        for(int i=0;i<s.length();i++){
            numbers.push_back(s[i]-'0');
            digitSum = digitSum + (s[i]-'0');
            squareSum = squareSum + (s[i]-'0')*(s[i]-'0');
        }

        if(squareSum-digitSum>=50){
            return true;
        }else{
            return false;
        }
    }
};