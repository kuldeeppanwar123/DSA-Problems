int countZeroes(int arr[], int n) {
        int low = 0;
        int high = n-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid]==1){
                low = mid+1;
            }
            else{
                if(mid==0 || arr[mid]!=arr[mid-1])
                return n-mid;
                
                else{
                   high = mid-1;
                }
            }
        }
        return 0;
    }
