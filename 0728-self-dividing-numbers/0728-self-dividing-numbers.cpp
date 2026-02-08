class Solution {
public:
    bool check_number(int number){

        int n = number;

        string s = to_string(number);

        vector<int> digits;

        for(char c:s){
            int x = c-'0';
            digits.push_back(x);
        }

        int count = 0;

        for(int i=0;i<digits.size();i++){

            if(digits.at(i)!=0 && number%digits.at(i)==0){
                count++;
            }else{
                return false;
            }

        }

        if(count==digits.size()){
            return true;
        }

        return {};

    }
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int> result;

        for(int i=left;i<=right;i++){

            bool x = check_number(i);

            if(x){
                result.push_back(i);
            }

        }

        return result;
    }
};