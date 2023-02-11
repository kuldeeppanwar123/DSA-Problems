 void solution(vector<vector<int>> maze, int row, int col, int n, string str, vector<string> &ans,vector<vector<bool>>&isVisited)
{
    if (row == n - 1 && col == n - 1)
    {
        ans.push_back(str);
        return;
    }
    //for down
    if (row+1 < n && !isVisited[row+1][col] && maze[row + 1][col] == 1)
    {
        isVisited[row][col]=true;
        solution(maze, row + 1, col, n, str + 'D', ans,isVisited);
        isVisited[row][col]=false;
    }
  
   //for right
    if (col+1 < n && !isVisited[row][col+1] && maze[row][col + 1] == 1)
    {
        isVisited[row][col]=true;
        solution(maze, row, col + 1, n, str + 'R', ans,isVisited);
        isVisited[row][col]=false;
    }

    //for left
    if (col-1>=0 && !isVisited[row][col-1] && maze[row][col- 1] == 1)
    {   
        isVisited[row][col]=true;
        solution(maze, row, col - 1, n, str + 'L', ans,isVisited);
        isVisited[row][col]=false;
    }
    
    //for Up
    if (row-1>=0 && !isVisited[row-1][col] && maze[row-1][col] == 1)
    {   
        isVisited[row][col]=true;
        solution(maze, row-1, col , n, str + 'U', ans,isVisited);
        isVisited[row][col]=false;
    }
}
    vector<string> findPath(vector<vector<int>> &m, int n) {
         
         vector<string> ans(0);
         if(m[0][0]==0)
         return ans;
         string s = "";
         vector<vector<bool>>isVisited(n,vector<bool>(n,false));
         solution(m, 0, 0, n, s, ans,isVisited);
          return ans;
          
    }
