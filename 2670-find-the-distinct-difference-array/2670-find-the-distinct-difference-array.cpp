class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {

        vector<int> result;

        for(int i=0;i<nums.size();i++){

            set<int> front;
            set<int> back;

            for(int j=0;j<=i;j++){
                front.insert(nums.at(j));
            }

            for(int k=i+1;k<=nums.size()-1;k++){
                back.insert(nums.at(k));
            }

            int frnt_unq = front.size(), bck_unq = back.size();

            result.push_back(frnt_unq-bck_unq);

        }

        return result;

    }
};