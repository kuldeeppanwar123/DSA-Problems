vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int low = 0;
        int high = nums.size()-1;

        while(low<=high){
            int sum = nums[low]+nums[high];

            if(sum==target){
                ans.push_back(low);
                ans.push_back(high);
                return ans;
            }

            else if(sum<target){
                low++;
            }
            else 
               high--;
        }
        return ans;
    }
