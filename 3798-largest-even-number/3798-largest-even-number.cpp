class Solution {
public:
    string largestEven(string s) {
        
        long long  n = s.length();
        long long count1 = 0;

        for (char c : s) {
            if (c == '1') count1++;
        }

        if (count1 == n) {
            return "";
        }

        if (s.back() == '2') {
            return s;
        }

        while (!s.empty() && s.back() != '2') {
            s.pop_back();
        }

        return s;
    }
};