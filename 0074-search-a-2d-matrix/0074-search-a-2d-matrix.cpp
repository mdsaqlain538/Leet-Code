class Solution {
public:

    bool binary_search(vector<int> result, int low, int high,int target){

        while(low<=high){
            int mid = low + (high-low)/2;
            if(result[mid]== target){
                return true;
            }else if(result[mid]<target){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return false;
        
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        vector<int> result;

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                result.push_back(matrix[i][j]);
            }
        }

        return binary_search(result,0,result.size()-1,target);

    }
};

