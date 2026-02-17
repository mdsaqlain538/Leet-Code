class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size();

        int result = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<i<<j<<endl;
                if((j+i)==(n-1) || (i==j)){
                    result = result + mat[i][j];
                }
            }
        }

        return result;
    }
};