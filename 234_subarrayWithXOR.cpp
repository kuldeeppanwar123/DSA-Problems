int subarraysWithSumK(vector < int > A, int B) {
   int xr =0;
    map<int,int>map;
    map[xr]++;
    int count =0;
    for(int i=0; i<A.size(); i++){
        xr^=A[i];
        int x = xr^B;
        count+=map[x];
        map[xr]++;
        
    }
    return count;
}
