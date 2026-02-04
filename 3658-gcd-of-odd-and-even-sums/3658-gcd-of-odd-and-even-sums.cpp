class Solution {
public:
    int gcdOfOddEvenSums(int n) {

        int sumOdd,sumEven;

        sumOdd = n * n;
        sumEven = n * (n+1);

        return gcd(sumOdd,sumEven);
    }
};