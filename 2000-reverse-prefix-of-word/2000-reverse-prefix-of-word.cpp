class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        string result;
        int idx = -1;

        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                idx = i;
                break;
            }
        }

        if(idx==-1){

            return word;

        }else{

            for(int i=idx;i>=0;i--){
                result = result + word[i];
            }

            for(int i=idx+1;i<word.size();i++){
                cout<<i;
                result = result + word[i];
            }

            return result;

        }
        return {};
    }
};