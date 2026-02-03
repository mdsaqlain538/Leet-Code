class Solution {
public:
    vector<int> decimalRepresentation(int n) {

        string s = to_string(n);

        int x = s.length()-1;

        vector<int> result;

        for(char c:s){

            if(c!='0'){

                int i = c-'0';
                int j = pow(10,x);

                result.push_back(i*j);
                x--;
            }else{
                x--;
            }

        }

        return result;
    }
};