class Solution {
public:
    bool isPalindrome(int x) {
        
        string s = to_string(x);

        int j = s.size()-1, count = 0;

        for(int i=0;i<s.size()/2;i++){

            if(s[i]==s[j]){
                count++;
                j--;
            }
        }

        if(count==s.size()/2){
            return true;
        }

        return false;
    }
};