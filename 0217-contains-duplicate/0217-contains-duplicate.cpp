class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> remove_duplicates;

        for(int i:nums){
            remove_duplicates.insert(i);
        }

        if(nums.size()==remove_duplicates.size()){
            return false;
        }else{
            return true;
        }
    }
};