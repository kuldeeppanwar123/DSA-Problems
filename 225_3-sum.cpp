vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n=nums.size();
        vector<vector<int>>ans;
        int i=0;
        while(i<n){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    do{j++;}while(j<n&&nums[j]==nums[j-1]);
                    do{k--;}while(k>0&&nums[k]==nums[k+1]);
                }
                else if(sum<0){
                    do{j++;}while(j<n&&nums[j]==nums[j-1]);
                }
                else
                    do{k--;}while(k>0&&nums[k]==nums[k+1]);
            }
            do{i++;}while(i<n&&nums[i]==nums[i-1]);
        }
        return ans;
    }
