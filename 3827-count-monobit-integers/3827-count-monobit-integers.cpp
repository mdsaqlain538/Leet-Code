class Solution {
public:
    
    bool identical_bits(string s){

        for(int i=0;i<s.size();i++){
            if(s[i]!=s[0]){
                return false;
            }
        }
        return true;
    }
    
    string binary_fun(int i){
        
        if(i==0){
            return "0";
        }
        
        string s = bitset<32>(i).to_string();
        return s.substr(s.find('1'));
    }
    
    int countMonobit(int n) {

        int count = 0;
        
        for(int i=0;i<=n;i++){
            
            string s = binary_fun(i);

            int x = s.length();

            if(x==1){
                count++;
            }else{
                bool y = identical_bits(s);

                if(y){
                    count++;
                }
            }
        }
        return count;
    }
};