bool twoSum(int nums[],int low,int high , int target) {
        while(low<high){
            int sum = nums[low]+nums[high];
            if(sum==target){
                return true;
            }

            else if(sum<target){
                low++;
            }
            else 
               high--;
        }
        return false;
    }
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i=0; i<n; i++){
            if(twoSum(A ,i+1 , n-1, X-A[i]))
            return true;
        }
        return false;
    }
