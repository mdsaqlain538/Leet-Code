class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {

        int n = nums.size(), count = 0;
        vector<int> positive_nums;

        for(int i=0;i<n;i++){
            if(nums.at(i)>0){
                count++;
            }
        }

        if(n==1){
            return nums;
        }else if(count == 0){
            return nums;
        }else{

        for(int i=0;i<n;i++){
            if(nums.at(i)>=0){
                positive_nums.push_back(nums.at(i));
            }
        }

        if(positive_nums.size()==1){
            return nums;
        }else{

            k = k % positive_nums.size();


            rotate(positive_nums.begin(), positive_nums.begin() + k, positive_nums.end());


            vector<int> result;

            int k=0;

            for(int i=0;i<n;i++){

                if(nums.at(i)>=0){
                    result.push_back(positive_nums.at(k));
                    k++;
                }else{
                    result.push_back(nums.at(i));
                }
            }
            return result;
        }
    }

        return {};
    }
};

