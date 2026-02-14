class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        vector<int> result;
        
        for(int i=0;i<words.size();i++){

            string s=words.at(i);

            int res = s.find(x);
            if (res != string::npos){
                result.push_back(i);
            }

        }

        return result;;
    }
};