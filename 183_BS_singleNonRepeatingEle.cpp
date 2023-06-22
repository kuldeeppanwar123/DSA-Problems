int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        cout<<n<<endl;
        if(n==1)return nums[0];
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];

        long long low=0;
        long long  high=n-1;

        while(low<=high){
            long long  mid = low+(high-low)/2;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])
               return nums[mid];

            else if((mid%2!=0 && nums[mid]==nums[mid-1]) || (mid%2==0 && nums[mid]==nums[mid+1]))
               low = mid+1;
            
            else
               high = mid-1;
        }
        return -1;
    }
