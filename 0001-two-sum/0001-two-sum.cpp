class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        for(int i=0;i<n;i++){

            int x = nums.at(i);

            for(int j=i+1;j<n;j++){

                int y = nums.at(j);

                if((x+y)==target){
                    vector<int> result;
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                    break;
                }
            }

        }

        return {};

        
        // int n=nums.size();
        // unordered_map<int,int> umap;

        // for(int i=0;i<n;i++)
        // {
        //     if(umap.find(target-nums[i])!=umap.end())
        //     {
        //         return vector<int>{umap[target-nums[i]],i};
        //     }
        //     umap[nums[i]]=i;
        // }
        
        // return {};
    }
};