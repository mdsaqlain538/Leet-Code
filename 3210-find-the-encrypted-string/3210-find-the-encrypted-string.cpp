class Solution {
public:
    string getEncryptedString(string s, int k) {
        
        int n = s.length();
        
        string result;
                
        for( int i = k; i < ( k+n ); i++){
            
            int j=i%n;
            
            result.push_back(s[j]);

        }
        return result;
    }
};