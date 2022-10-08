 public int maximumDifference(int[] nums) {
       int n = nums.length;
        int res = -1;
        int minv = nums[0];
        for(int i=1; i<n; i++){
            res = Math.max(res , nums[i]-minv);
            minv = Math.min(minv , nums[i]);
        }
        return res==0?-1:res;
    }
