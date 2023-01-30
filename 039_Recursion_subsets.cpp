void helper(vector<int>&nums , int idx , vector<int>result , vector<vector<int>>&ans){
    if(idx==nums.size()){
        ans.push_back(result);
        return;
    }
    helper(nums , idx+1,result , ans);
    result.push_back(nums[idx]);
    helper(nums , idx+1,result , ans);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>result;
        helper(nums ,0,result,ans);
        return ans;
    }
