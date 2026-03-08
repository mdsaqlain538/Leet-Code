class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {

        vector<int> idx;

        for(int i=0;i<capacity.size();i++){

            if(capacity.at(i)>=itemSize){

                idx.push_back(capacity.at(i));

            }
        }

        if(idx.size()>0){

            int result = *min_element(idx.begin(),idx.end());

            for(int i=0;i<capacity.size();i++){

                if(result==capacity.at(i)){
                    return i;
                }
            }
        }

        return -1;
        
    }
};

