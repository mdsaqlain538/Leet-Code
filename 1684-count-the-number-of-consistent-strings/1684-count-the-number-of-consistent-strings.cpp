class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {

      map<char,int> afreq;

      for(char c:allowed){
        afreq[c]++;
      }

      int cs=0;
      
      for(int i=0;i<words.size();i++){
        
        string s = words[i];

        int count = 0;

        for(char c:s){
            if(afreq[c]==1){
                count++;
            }
        }

        if(count==s.size()){
            cs++;
        }

      }

      return cs;

    }
};