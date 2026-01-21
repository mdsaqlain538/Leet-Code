class Solution {
public:
    int residuePrefixes(string s) {

        int n = s.length(), res=0;

        for(int i=0;i<=n;i++){
            string s1 = s.substr(0,i);

            unordered_set<char> st(s1.begin(), s1.end());
            int ans = st.size();

            if(ans==(s1.length())%3){
                res++;
            }
        }
        return res-1;
    }
};