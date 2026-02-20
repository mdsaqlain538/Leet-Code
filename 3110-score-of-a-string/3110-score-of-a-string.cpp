class Solution {
public:
    int scoreOfString(string s) {
        
        int result = 0;
        int n = s.size();

        for(int i=0;i<n-1;i++){
            result = result + abs(int(s[i])-int(s[i+1]));
        }

        return result;
    }
};