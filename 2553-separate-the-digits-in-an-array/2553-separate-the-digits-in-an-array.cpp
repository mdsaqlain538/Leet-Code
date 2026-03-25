class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        string s;

        for(int i=0;i<nums.size();i++){
            s = s + to_string(nums.at(i));
        }

        vector<int> result;

        for(int i=0;i<s.size();i++){

            result.push_back((s[i]-'0'));

        }

        return result;

    }
};