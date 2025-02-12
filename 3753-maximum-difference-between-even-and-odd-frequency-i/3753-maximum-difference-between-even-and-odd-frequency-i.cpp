class Solution {
public:
    int maxDifference(string s) {

        vector<int> v;

        vector<int> max;

        unordered_map<char, int> um;

        for(int i = 0; i < s.length(); i++){
            v.push_back(s[i]);
        }

        for (auto i : v)
            um[i]++;

        for (auto i : um)
            max.push_back(i.second);

        vector<int> odd_elements;

        vector<int> even_elements;

        for( auto i : max)
            if(i%2!=0)
                odd_elements.push_back(i);
            else
                even_elements.push_back(i);

        sort(odd_elements.begin(), odd_elements.end(), greater<>());

        sort(even_elements.begin(), even_elements.end());

        int odd_size = odd_elements.size();

        return odd_elements[0]-even_elements[0];
            
    }
};