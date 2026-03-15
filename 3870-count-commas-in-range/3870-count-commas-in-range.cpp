class Solution {
public:
    int countCommas(int n) {

        if(n<1000){
            return 0;
        }

        return abs((n-1000)+1);

    }
};