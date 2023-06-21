int findKRotation(int nums[], int n) {
	    int low = 0;
        int high = n-1;
        int ans = 0;
        int minEle = INT_MAX;
        
        while(low<=high){
            int mid = low+(high-low)/2;
 
            if(nums[low]<=nums[mid]){
                if(minEle>nums[low]){
                    minEle = nums[low];
                    ans = low;
                }
                low = mid+1;
            }
            else{
                if(minEle>nums[mid]){
                    minEle = nums[mid];
                    ans = mid;
                }
                high = mid-1;
            }
        }
        return ans;
	}
