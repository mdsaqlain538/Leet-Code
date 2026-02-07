class Solution {
public:
    int firstUniqChar(string s) {

        int n = s.size();
        map<char,int> freq;

        for(char c:s){
            freq[c]++;
        }

        for(int i=0;i<n;i++){

            char c = s[i];

            if(freq[c]==1){
                return i;
                break;
            }
        }

        return -1;
    }
};
