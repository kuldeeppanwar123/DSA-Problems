public int pivotIndex(int[] nums) {
        int sum =0;
        for(int i=0; i<nums.length; i++){
            sum+=nums[i];
        }
        int lsum=0;
        for(int i=0; i<nums.length; i++){
            int rsum = sum-nums[i];
            if(lsum==rsum)return i;
            lsum +=nums[i];
            sum -=nums[i];
        }
        return -1;
    }
