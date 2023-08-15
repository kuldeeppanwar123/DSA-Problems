// TLE
vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>>ans_set;

        for(int i=0; i<n; i++){
            set<int>set;
            for(int j=i+1; j<n; j++){
                int remaining = -(nums[i]+nums[j]);
                if(set.find(remaining)!=set.end()){
                    vector<int>temp={nums[i],nums[j],remaining};
                    sort(temp.begin() , temp.end());
                    ans_set.insert(temp);
                }
                set.insert(nums[j]);
            }
        }
        vector<vector<int>>ans(ans_set.begin() , ans_set.end());
        return ans;
    }
