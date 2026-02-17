class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {

        int n = grid.size();

        vector<vector<int>> result(n - 2, vector<int>(n - 2));

        for(int i=0;i<n-2;i++){

            for(int j=0;j<n-2;j++){

                int x = i+3, y = j+3;

                int maxi = INT_MIN;

                for(int k=i;k<x;k++){

                    for(int l=j;l<y;l++){

                        maxi = max(maxi,grid[k][l]);
                    }
                    
                }

                result[i][j] = maxi;

            }
        }

        return result;
    }
};

//SHEET:

// n=4   ->    m=2

// (i=0,j=4)

// i(0,3)       i(0,3)
// j(0,3)       j(1,4)
// 00 01 02     01 02 03
// 10 11 12     11 12 13
// 20 21 22     21 22 23


// i(1,4)        i(1,4)
// j(0,3)        j(1,4)
// 10 11 12      11 12 13
// 20 21 22      21 22 23
// 30 31 32      31 32 33


// n=5.     ->    m=3
// (i=0,j=5)


// i(0,3)       i(0,3)       i(0,3)
// j(0,3)       j(1,4)       j(2,5)

// 00 01 02      01 02 03     02 03 04
// 10 11 12      11 12 13     12 13 14
// 20 21 22      21 22 23     22 23 24

// i(1,4)        i(1,4)       i(1,4)
// j(0,3)        j(1,4)       j(2,5)

// 10 11 12      11 12 13     12 13 14
// 20 21 22      21 22 23     22 23 24
// 30 31 32      31 32 33     32 33 34

// i(2,5)        i(2,5)       i(2,5)
// j(0,3)        j(1,4)       j(2,5)

// 20 21 22      21 22 23     22 23 24
// 30 31 32      31 32 33     32 33 34
// 40 41 42      41 42 43     42 43 44



//TODO: think of better approach instead of too many loops