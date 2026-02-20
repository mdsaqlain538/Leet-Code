class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        map<char,int> freq;

        for(int i=0;i<stones.size();i++){
            freq[stones[i]]++;
        }

        int result = 0;

        for(char c : jewels){
            result = result + freq[c];
        }

        return result;
    }
};