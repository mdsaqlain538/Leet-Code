class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        
        int n = nums.size();

        sort(nums.begin(),nums.end());

        int x = nums.at(0);

        int y = nums.at(n-1);

        vector<int> result;

        for(int i=x;i<=y;i++){

            auto it = find(nums.begin(), nums.end(), i);

            if(it!=nums.end()){
                //do nthg
            }else{
                result.push_back(i);
            }
        }

        return result;
        
    }
};