class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        string append_str1;
        string append_str2;

        for(int i=0;i<word1.size();i++){
            append_str1 = append_str1 + word1.at(i);
        }

        for(int j=0;j<word2.size();j++){
            append_str2 = append_str2 + word2.at(j);
        }

        cout<<append_str1<<endl;

        cout<<append_str2<<endl;

        if(append_str1==append_str2){
            return true;
        }else{
            return false;
        }
    }
};