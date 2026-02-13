class Solution {
public:
    bool isPalindrome(string s) {
        
        vector<char> pal;

        for(int i=0;i<s.size();i++){

            char c = s[i];
            int x = int(s[i]);

            if(x>=65 && x<=90){
                s[i] = tolower(c);
                pal.push_back(s[i]);
            }
            else if(x>=97 && x<=122){
                pal.push_back(s[i]);
            }else if(x>=48 && x<=57){
                pal.push_back(s[i]);
            }else{
                //do nthg
            }

        }

        for(char c:pal){
            cout<<c;
        }

        int left=0, right=pal.size()-1;

        while(left<=right && pal.at(left)==pal.at(right)){
            left++;
            right--;
        }

        if(left>right){
            return true;
        }else{
            return false;
        }

        return {};
    }
};
