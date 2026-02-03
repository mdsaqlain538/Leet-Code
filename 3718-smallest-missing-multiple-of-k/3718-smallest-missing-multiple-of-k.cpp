class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        int n = nums.size();

        if(n==1){

            if(nums.at(0)==k){
                return nums.at(0)*2;
            }else{
                return k;
            }

        }else{

            int e = n+1;

            int i = 1;

            vector<int> multiple;

            while(e--){
                multiple.push_back(i*k);
                i++;
            }

            sort(nums.begin(),nums.end());

            nums.push_back(0);

            for(int j=0;j<nums.size();j++){
                auto it = find(nums.begin(), nums.end(), multiple.at(j));

                if(it!=nums.end()){
                    //nthg
                }else{
                    return multiple.at(j);
                }

            }
        }


        return {};
    }
};