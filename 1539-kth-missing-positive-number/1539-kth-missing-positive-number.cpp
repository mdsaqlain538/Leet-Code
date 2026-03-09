class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        map<int,int> freq;

        for(int x : arr){
            freq[x]++;
        }

        vector<int> result;

        int value = k, count = 0, i = 1;


        while(k>0 && count<arr.size()){


            auto it = freq.find(i);

            if (it != freq.end()) {
                count++;
            }else{
                result.push_back(i);
                k--;
            }

            i++;

        }

        if(count==arr.size()){

            for(int j=i;j<i+k;j++){
                result.push_back(j);
            }
        }

        return result.at(value-1);
    }
};