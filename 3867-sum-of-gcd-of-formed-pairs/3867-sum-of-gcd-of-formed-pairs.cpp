class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        long long int max = INT_MIN;
        vector<long long int> prefixGcd;

        for(int i=0;i<nums.size();i++){

            if(max<nums.at(i)){
                max = nums.at(i);
            }

            prefixGcd.push_back(gcd(max,nums.at(i)));

        }

        sort(prefixGcd.begin(),prefixGcd.end());

        long long int j = prefixGcd.size()-1, result = 0;

        for(int i=0;i<prefixGcd.size()/2;i++){

            result = result + gcd(prefixGcd.at(i),prefixGcd.at(j));

            j--;

        }

        return result;
        
    }
};