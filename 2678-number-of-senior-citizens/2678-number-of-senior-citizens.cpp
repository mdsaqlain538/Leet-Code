class Solution {
public:
    int countSeniors(vector<string>& details) {

        int result = 0;
        
        for(int i=0;i<details.size();i++){

            string s = details[i];

            char age0 = s[11];
            char age1 = s[12];

            string age = "";

            age = age + age0 + age1;

            int x = stoi(age);

            if(x>60){
                result++;
            }

        }

        return result;
    }
};