  public int maxSubArray(int[] nums) {
        int res = nums[0];
        int finalRes = res;

        for(int i=1; i<nums.length; i++){
            res = Math.max(res+nums[i] , nums[i]);
            finalRes = Math.max(finalRes , res);
        }
        return finalRes;
    }
