class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int> freq;

        for(int i=0;i<arr.size();i++){
            freq[arr.at(i)]++;
        }

        int result = freq.size();

        set<int> dup;

        for(auto& f: freq){
            dup.insert(f.second);
        }

        if(dup.size()==result){
            return true;
        }else{
            return false;
        }

    }
};