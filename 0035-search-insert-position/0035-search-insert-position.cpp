class Solution {
public:
    int binary_search(vector<int> nums,int target){

        int low = 0, high = nums.size()-1;

        while(low<=high){

            int mid = low + (high-low)/2;

            if(nums.at(mid)==target){
                return mid;
            }

            if(nums.at(mid)<target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }

        return -1;


    }
    int searchInsert(vector<int>& nums, int target) {
        
        int idx = binary_search(nums,target);

        if(idx==-1){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            return binary_search(nums,target);
        }else{
            return idx;
        }
    }
};