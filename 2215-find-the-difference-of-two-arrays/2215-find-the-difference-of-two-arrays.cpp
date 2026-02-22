class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        set<int> nums1d;
        set<int> nums2d;

        for(int i=0;i<nums1.size();i++){
            nums1d.insert(nums1.at(i));
        }

        for(int j=0;j<nums2.size();j++){
            nums2d.insert(nums2.at(j));
        }

        vector<vector<int>> result(2);

        int k=0,l=0;

        for(auto& n1: nums1d){
            if(find(nums2d.begin(),nums2d.end(),n1)!=nums2d.end()){
                //donthg
            }else{
                result[0].push_back(n1);
                k++;
            }
        }

        for(auto& n2: nums2d){
            if(find(nums1d.begin(),nums1d.end(),n2)!=nums1d.end()){
                //donthg
            }else{
                result[1].push_back(n2);
                l++;
            }
        }
        return result;
    }
};