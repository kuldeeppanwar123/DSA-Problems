int solve(int n , int m, int row , int col , vector<vector<int>>&v){
        if(row==n-1 && col==m-1)return 1;
        if(row>=n || col>=m)return 0;

        if(v[row][col]!=-1)return v[row][col];

        int count = 0;
        count+= solve(n,m,row , col+1,v);
        count+= solve(n,m,row+1, col,v);
        v[row][col] = count;
        return count;

    }
    int uniquePaths(int n, int m) {
        vector<vector<int>>v(n , vector<int>(m,-1));
        return solve(n,m,0,0,v);
    }
