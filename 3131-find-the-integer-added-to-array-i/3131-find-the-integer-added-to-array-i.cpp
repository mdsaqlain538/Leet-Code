class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        return nums2.at(0)-nums1.at(0);
    }
};
