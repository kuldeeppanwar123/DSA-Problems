int merge(vector<int>&nums, int low , int mid, int high){
        int n = mid-low+1;
        int m = high-mid;

        int left[n];
        int right[m];

        for(int i=0; i<n; i++)
        left[i] = nums[low+i];

        for(int i=0; i<m; i++)
        right[i] = nums[mid+1+i];

        int i=0;
        int j=0;
        int count = 0;
        
        while(i<n && j<m){
            if(left[i]>(long long)2*right[j]){
                count +=(n-i);
                j++;
            }
            else i++;
        }
         i=0;
         j=0;
         int k=low;
    
        while(i<n&&j<m){
            if(left[i]<=right[j]){
                nums[k++] = left[i++];
            }
            else{
                nums[k++] = right[j++];
            }
        }
        while(i<n)nums[k++] = left[i++];
        while(j<m)nums[k++] = right[j++];
        
        return count;
    }

    int mergeSort(vector<int>&nums , int low , int high){
        int count = 0;
        if(low<high){
            int mid = low+(high-low)/2;
           count+= mergeSort(nums, low , mid);
           count+= mergeSort(nums , mid+1 , high);
           count+= merge(nums, low , mid , high);
        }
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int a= mergeSort(nums,0,nums.size()-1);
         for(int i:nums)cout<<i<<" ";
         return a;
    }
