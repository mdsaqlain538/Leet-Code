class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();

        vector<pair<int,int>> visited;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                std::pair<int, int> value = {j,i};

                auto it = find(visited.begin(), visited.end(), value);
                if( it == visited.end()){
                swap(matrix[i][j],matrix[j][i]);
                visited.push_back({i,j});
                }
            }
        }

        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }

    }
};
