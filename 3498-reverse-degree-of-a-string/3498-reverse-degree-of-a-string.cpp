class Solution {
public:
    int reverseDegree(string s) {
        
        int result = 0, counter = 26;
        char i;
        map<char,int> alpha;

        for(i='a';i<='z';i++){
            alpha[i] = counter;
            counter--;
        }

        for(int i=0;i<s.size();i++){
            result = result + (alpha[s[i]])*(i+1);
        }

        return result;
    }
};