class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        
        string initials;

        for(int i=0;i<words.size();i++){
            initials = initials + words[i][0];
        }

        if(initials==s){
            return true;
        }

        return false;
    }
};