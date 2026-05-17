class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {

        vector<int> numbers;

        for(int i=0;i<s.size();i++){
            numbers.push_back(s[i]-'0');
        }

        vector<int> diff;

        for(int i=0;i<numbers.size()-1;i++){
            diff.push_back(abs(numbers.at(i)-numbers.at(i+1)));
        }

        bool result = true;

        for(int i=0;i<diff.size();i++){
            if(diff.at(i)>2){
                result = false;
            }
        }

        return result;
    }
};