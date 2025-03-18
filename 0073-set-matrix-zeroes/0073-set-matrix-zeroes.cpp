class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {


        int row_arr[matrix.size()];
        int col_arr[matrix[0].size()];

        for(int i=0;i<matrix.size();i++){
            row_arr[i]=0;
        }

        for(int i=0;i<matrix[0].size();i++){
            col_arr[i]=0;
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    row_arr[i] = 1;
                    col_arr[j] = 1;
                }
            }
        }

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(row_arr[i]==1 || col_arr[j]==1){
                    matrix[i][j]=0;
                }
            }
        }

    }
};