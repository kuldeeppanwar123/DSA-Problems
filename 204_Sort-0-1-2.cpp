void sortColors(vector<int>& nums) {
        int i = -1;
        int j = nums.size();
        int k = 0;

        while(k<j){
            if(nums[k]==2)
             swap(nums[--j] , nums[k]);
            
            else if(nums[k]==0)
             swap(nums[++i] , nums[k++]);

            else
             k++;
        }
    }
