class Solution {
public:
    int maxDistinct(string s) {

        set<char> unq;
        for(int i=0;i<s.size();i++){
            unq.insert(s[i]);
        }

        return unq.size();
    }
};

