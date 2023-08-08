vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();

        vector<vector<int>>ans(colSize , vector<int>(rowSize));

        for(int row = 0; row<rowSize; row++){
            for(int col=0; col<colSize; col++){
                ans[col][row] = matrix[row][col];
            }
        }
        return ans;
    }
