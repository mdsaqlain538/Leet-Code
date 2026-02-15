class Solution {
public:
    string reversePrefix(string s, int k) {
        
        if(k==s.size()){
            reverse(s.begin(),s.end());
            return s;
        }else{

            string s1 = s.substr(0,k);

            reverse(s1.begin(),s1.end());

            string s2 = s.substr(k,s.size());

            return s1+s2;

        }

        return {};
    }
};