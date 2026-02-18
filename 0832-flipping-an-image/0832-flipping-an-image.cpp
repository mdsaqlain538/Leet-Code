class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n = image.size();

        vector<vector<int>> result(n,vector<int>(n));

        for(int i=0;i<n;i++){

            vector<int> row_result = image[i];

            reverse(row_result.begin(),row_result.end());

            result[i] = row_result;
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(result[i][j]==0){
                    result[i][j] = 1;
                }else{
                    result[i][j] = 0;
                }
            }
        }

        return result;
    }
};