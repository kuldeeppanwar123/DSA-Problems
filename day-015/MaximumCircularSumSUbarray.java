public int kadane(int[]nums){
      int max = nums[0];
      int res = max;
      for(int i=1; i<nums.length; i++){
          max = Math.max(max+nums[i] , nums[i]);
          res = Math.max(res , max);
      }
       return res;
    }
    public int  circularMax(int[]nums){
         int len = nums.length;
         int min = nums[0];
         int minsub = min;
         for(int i=1; i<len; i++){
             min = Math.min(min+nums[i] , nums[i]);
             minsub = Math.min(minsub , min);
         }
         int totalSum = 0;
         for(int i=0; i<len; i++)
         totalSum+=nums[i];

         return (totalSum-minsub);
    }
    public int maxSubarraySumCircular(int[] nums) {
        if(kadane(nums)<0)
         return kadane(nums);

         return Math.max(kadane(nums) , circularMax(nums));
    }
