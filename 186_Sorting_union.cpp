int doUnion(int a[], int n, int b[], int m)  {
       set<int>Set;
       for(int i=0; i<n; i++){
           Set.insert(a[i]);
       }
       for(int i=0; i<m; i++){
           Set.insert(b[i]);
       }
       return Set.size();
       
    }
