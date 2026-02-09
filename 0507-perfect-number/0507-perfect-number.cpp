class Solution {
public:
    bool check_divisor(int number, int num){

        if(num%number==0){
            return true;
        }else{
            return false;
        }

    }
    bool checkPerfectNumber(int num) {

        vector<int> numbers;
        int result = 0;

        for(int i=1;i<num;i++){

            bool x = check_divisor(i,num);

            if(x){
                result = result + i;
            }

        }   

        if(result==num){
            return true;
        }else{
            return false;
        }


    }
};