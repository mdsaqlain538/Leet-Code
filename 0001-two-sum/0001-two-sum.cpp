class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int sum , k = 0;
        vector<int> result;
        
        for(int i =0 ; i < nums.size(); i++){
            
            sum = target - nums[i];
            
            for(int j = 0; j < nums.size(); j++){
                
                if( sum == nums[j] && i!=j ){
                    
                    k++;
                    
                    result.push_back(i);
                    result.push_back(j);
                    
                    if(k==1){
                        return result;
                    }          
                }
            }
            
        }
        return result;
    }
};