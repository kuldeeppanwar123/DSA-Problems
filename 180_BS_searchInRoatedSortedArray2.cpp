bool Search(int N, vector<int>& A, int Key) {
       int low =0;
       int high = A.size()-1;
       
       while(low<=high){
           int mid = low+(high-low)/2;
           
           if(A[mid]==Key)
           return 1;
           
           if(A[low]==A[mid] && A[mid]==A[high]){
               low++;
               high--;
               continue;
           }
           
           
           else if(A[low]<=A[mid]){
               if(Key>=A[low] && Key<=A[mid])
                    high = mid-1;
               else 
                    low = mid+1;
           }
           else{
               if(Key>A[mid] && Key<=A[high])
                    low = mid+1;
               else
                   high = mid-1;
                
           }
       }
       return 0;
    }
