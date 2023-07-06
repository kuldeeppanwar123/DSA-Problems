long long findMinDiff(vector<long long> a, long long n, long long m){
    //  if(n<m)return -1;
     sort(a.begin(),a.end());
     
     long long res = a[m-1]-a[0];
     for(long long i=1; i<=n-m; i++){
         long long diff = a[i+m-1]-a[i];
         res = min(res,diff);
     }
     return res;
    }   
