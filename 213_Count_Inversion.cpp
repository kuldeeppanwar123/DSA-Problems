long long merge(long long*arr , int low ,int mid , int high){
    int n = mid-low+1;
    int m = high-mid;
    
    int left[n];
    int right[m];
    
    for(int i=0; i<n; i++){
        left[i] = arr[low+i];
    }
    for(int i=0; i<m; i++){
        right[i] = arr[mid+i+1];
    }
    
    long long count = 0;
    int i=0;
    int j=0;
    int k=low;
    while(i<n && j<m){
        if(left[i]>right[j]){
            count+=(n-i);
            arr[k++] = right[j++];
        }
        else{
            arr[k++] = left[i++];
        }
    }
    
    while(i<n)arr[k++] = left[i++];
    while(j<m)arr[k++] = right[j++];

    return count;
    
}
long long mergeSort(long long*arr , int low , int high){
    long long count=0;
    if(low<high){
        long long mid = low+(high-low)/2;
        count+= mergeSort(arr , low , mid);
        count+= mergeSort(arr , mid+1 , high);
        count+= merge(arr , low , mid, high);
    }
    return count;
}
long long getInversions(long long *arr, int n){
    return mergeSort(arr ,0,n-1);
}
