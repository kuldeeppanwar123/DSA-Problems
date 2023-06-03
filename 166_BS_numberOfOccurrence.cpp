int firstOccurrence(int*arr,int low , int high , int x){
    if(low>high)return -1;
    
    int mid = (low+high)/2;
    
    if(arr[mid]>x)
    return firstOccurrence(arr , low , mid-1 , x);
    
    else if(arr[mid]<x)
    return firstOccurrence(arr , mid+1 , high , x);
    
    else{
        if(mid==0 || arr[mid]!=arr[mid-1])
        return mid;
        else
        return firstOccurrence(arr , low , mid-1 , x);
    }
}

int lastOccurrence(int*arr,int low , int high , int x ,int n){
    if(low>high)return -1;
    
    int mid = (low+high)/2;
    
    if(arr[mid]>x)
    return lastOccurrence(arr , low , mid-1 , x,n);
    
    else if(arr[mid]<x)
    return lastOccurrence(arr , mid+1 , high , x,n);
    
    else{
        if(mid==n || arr[mid]!=arr[mid+1])
        return mid;
        else
        return lastOccurrence(arr , mid+1 , high , x,n);
    }
        
    
}
	int count(int arr[], int n, int x) {
	    int first = firstOccurrence(arr,0,n-1,x);
	    if(first==-1)
	    return 0;
	    
	    return lastOccurrence(arr,0,n-1,x,n)-first+1;
	    
	}
