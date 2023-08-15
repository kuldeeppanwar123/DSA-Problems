vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        int i=0;
        while(i<n){
            // if(i>0 && nums[i]==nums[i-1])continue;
            int j=i+1;
            while(j<n){
                // if(j>0 && nums[j]==nums[j-1])continue;
                
                int k = j+1;
                int l = n-1;
                while(k<l){
                    auto sum = (long long int)nums[i]+nums[j]+nums[k]+nums[l];
                    // long long int sum = target-nums[i]-nums[j]-nums[k]-nums[l];
                    if(sum==target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        do{k++;}while(k<n && nums[k]==nums[k-1]);
                        do{l--;}while(l>0 && nums[l]==nums[l+1]);
                    }
                    else if(sum<target){
                        do{k++;}while(k<n && nums[k]==nums[k-1]);
                    }
                    else{
                        do{l--;}while(l>0 && nums[l]==nums[l+1]);
                    }

                }
                do{j++;}while(j<n && nums[j]==nums[j-1]);
            }
            do{i++;}while(i<n && nums[i]==nums[i-1]);
        }
        return ans;
    }
