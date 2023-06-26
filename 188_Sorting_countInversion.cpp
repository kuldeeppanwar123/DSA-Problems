long long int CountMerge(long long arr[], long long low ,long long mid , long long high){
        long long n = mid - low + 1;
        long long m = high - mid;
        long long left[n];
        long long right[m];
        
        for(int i=0; i<n; i++){ left[i] = arr[low+i];}
        for(int i=0; i<m; i++){ right[i] = arr[mid+i+1];}
        
        long long i=0 , j=0 , k=low;
        long long int res =0;
        while(i<n&&j<m){
            if(left[i]<=right[j]){
                arr[k] = left[i++];
            }
            else{
                arr[k] = right[j++];
                res+=(n-i);
            }
            k++;
        }
        while(i<n){arr[k++] = left[i++];}
        while(j<m){arr[k++] = right[j++];}
        
        return res;
    }
    long long int CountInversion(long long arr[] , long long low , long long high)
    {
        long long int res =0;
        
        if(low<high){
            long long mid = low+(high-low)/2;
            res+=CountInversion(arr , low , mid);
            res+=CountInversion(arr , mid+1 , high);
            res+=CountMerge(arr , low , mid , high);
        }
        return res;
    }
    long long int inversionCount(long long arr[], long long N)
    {
       long long low = 0;
       long long high = N-1;
       return CountInversion(arr , low , high);
       
    }
