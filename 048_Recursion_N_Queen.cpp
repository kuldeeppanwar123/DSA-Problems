bool isSafe(vector<string>board , int row ,int col , int n){
    int tempRow = row;
    int tempCol = col;

    while(tempRow>=0 && tempCol>=0){
        if(board[tempRow][tempCol]=='Q')
        return false;
      
            tempRow--;
            tempCol--;
        
    }


    
    tempCol = col;
    while(tempCol>=0){
        if(board[row][tempCol]=='Q')
        return false;
       
            tempCol--;
        
    }

     tempRow = row;
     tempCol = col;

    while(tempRow<n && tempCol>=0){
        if(board[tempRow][tempCol]=='Q')
        return false;
        
            tempRow++;
            tempCol--;
        
    }
    return true;

}
void helper(vector<string>&board,int col , int n,vector<vector<string>>&ans){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0; row<n; row++){
        if(isSafe(board , row,col,n)){
            board[row][col] = 'Q';
            helper(board,col+1,n , ans);
            board[row][col]='.';
        }

    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
        string s(n,'.');
        for(int i=0; i<n; i++){
            board.push_back(s);
        }
        helper(board,0,n,ans);
        return ans;
    }
