class Solution {
public:
    string decToBinary(int n) {
        
        string bin = "";
        while (n > 0) {
            int bit = n%2;
            bin.push_back('0' + bit);
            n /= 2;
        }
        
        reverse(bin.begin(), bin.end());
        return bin;
    }

    int minChanges(int n, int k) {

        if((n&k)==k){

            int x = (n ^ k),count =0;

            string y=decToBinary(x);

            for(char c:y){
                if(c=='1'){
                    count++;
                }
            }

            return count;

        }else{
            return -1;
        }

    }
};