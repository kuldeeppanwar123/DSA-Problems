int firstOccurrance(int arr[] , int n , int x){
	    int low = 0;
	    int high = n-1;
	    int ans = -1;
	    while(low<=high){
	        int mid = low+(high-low)/2;
	        
	        if(x==arr[mid]){
	            ans = mid;
	            high = mid-1;
	        }
	        else if(arr[mid]<x){
	            low= mid+1;
	        }
	        else 
	            high = mid-1;
	    }
	    return ans;
	}
	
	
	int lastOccurrance(int arr[],int n, int x){
	    int low = 0;
	    int high = n-1;
	    int ans = -1;
	    while(low<=high){
	        int mid = low+(high-low)/2;
	        
	        if(x==arr[mid]){
	            ans = mid;
	            low = mid+1;
	        }
	        else if(arr[mid]<x){
	            low= mid+1;
	        }
	        else 
	            high = mid-1;
	    }
	    return ans;
	}
	
	int count(int arr[], int n, int x) {
	   int first = firstOccurrance(arr , n , x);
	   if(first==-1)return 0;
	   int last = lastOccurrance(arr , n , x);
	   
	   //cout<<"first "<<first<<endl;
	   //cout<<"last : "<<last<<endl;
	   return last-first+1;
	}
