class Solution {
public:
    int pivotInteger(int n) {
        
        int result = 0, arithmetic_sum = ((n*(n+1))/2);

        int pivot;

        for(int i=1;i<=n;i++){

            result = result + i;

            pivot = arithmetic_sum - (result - i);

            if(result==pivot){
                return i;
            }

        }

        return -1;
    }
};