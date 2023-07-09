vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();

        int i=0;
        while(i<n){
            if(nums[i]<=n && nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
            else
                i++;
        }
        for(int i=0; i<n; i++){
            if(i!=nums[i]-1)
            ans.push_back(i+1);
        }
        return ans;
    }
