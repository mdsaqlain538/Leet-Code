class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {

        vector<int> values;
        
        for(int i=0;i<nums.size()-1;i++){

            for(int j=i+1;j<nums.size();j++){

                if( (nums.at(i)==1 && nums.at(j)==2) || (nums.at(i)==2 && nums.at(j)==1) ){
                    values.push_back(abs(i-j));
                }
            }
        }

        if(values.size()==0){
            return -1;
        }

        return *min_element(values.begin(),values.end());

    }
};