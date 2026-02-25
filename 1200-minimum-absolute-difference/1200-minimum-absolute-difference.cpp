class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        vector<vector<int>> result;

        sort(arr.begin(),arr.end());

        int x_min = INT_MAX;

        for(int i=0;i<arr.size()-1;i++){
            x_min = min(x_min, abs(arr[i+1]-arr[i]));
        }

        for(int i=0;i<arr.size()-1;i++){

            if(x_min==abs(arr[i+1]-arr[i])){
                result.push_back({arr[i],arr[i+1]});
            }

        }

        return result;
    }
};