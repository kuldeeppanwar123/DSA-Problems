// using sorting O(n*log n)
int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;

        sort(nums.begin() , nums.end());
        int count =1;
        int maxi = 1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1])
            continue;

            if(nums[i]==nums[i-1]+1){
                count++;
                maxi = max(maxi , count);
            }
            else
               count =1;
        }
        return maxi;
    }
