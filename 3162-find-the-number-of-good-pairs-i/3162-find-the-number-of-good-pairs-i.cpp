class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        int count = 0;

        for(int i=0;i<=nums1.size()-1;i++){

            for(int j=0;j<=nums2.size()-1;j++){

                if(nums1.at(i)%(nums2.at(j)*k)==0){
                    count++;
                }

            }
        }

        return count;
    }
};