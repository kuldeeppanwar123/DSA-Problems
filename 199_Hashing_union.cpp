int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int>s(a,a+n);
        s.insert(b,b+m);
        return s.size();
        
    }
