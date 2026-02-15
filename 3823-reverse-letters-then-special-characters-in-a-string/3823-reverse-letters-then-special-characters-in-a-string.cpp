class Solution {
public:
    string reverseByType(string s) {
        
        string spl;

        string chr;

        for(int i=0;i<s.size();i++){
            if((s[i]-0)>=97 && (s[i]-0)<=122){
                chr = chr + s[i];
            }else{
                spl = spl + s[i];
            }
        }

        reverse(chr.begin(),chr.end());

        reverse(spl.begin(),spl.end());

        string res;
        int ci=0,si=0;

        for(int i=0;i<s.size();i++){

            if((s[i]-0)>=97 && (s[i]-0)<=122){
                res = res + chr[ci];
                ci++;
            }else{
                res = res + spl[si];
                si++;
            }

        }

        return res;
    }
};