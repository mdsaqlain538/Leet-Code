class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        map<int,int> freq;

        for(int i=0;i<nums.size();i++){
            freq[nums.at(i)]++;
        }

        vector<int> order;  
        set<int> seen;       
        
        for (auto& f : freq) {
            if (seen.insert(f.second).second) {
                order.push_back(f.second);
            }
        }

        if(order.size()<=1){
            return vector<int>{-1,-1};
        }else{

            vector<int> result;
            int k=0;

            for(auto&f : freq){

                if(k<order.size() && k<=1){

                    if(f.second==order.at(k)){
                        result.push_back(f.first);
                        k=k+1;
                    }
                }
                
            }

            return result;
        }
    }
};



