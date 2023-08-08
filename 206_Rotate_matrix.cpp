// for n*n matrix
void Transpose(vector<vector<int>>&v){
        for(int row=0; row<v.size(); row++){
            for(int col=row+1; col<v.size(); col++){
                swap(v[row][col] , v[col][row]);
            }
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        Transpose(matrix);
        for(int row=0; row<matrix.size(); row++){
            reverse(matrix[row].begin() , matrix[row].end());
        }
    }
