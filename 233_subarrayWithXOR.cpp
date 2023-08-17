int Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    int count = 0;
    
    for(int i=0; i<n; i++){
        int x = 0;
        for(int j=i; j<n; j++){
            x^=A[j];
            if(x==B)count++;
        }
    }
    return count;
}
