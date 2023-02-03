void helper(vector<int>&nums , int idx , vector<int>result , set<vector<int>>&ans){
    if(idx==nums.size()){
        ans.insert(result);
        return;
    }
    helper(nums , idx+1,result , ans);
    result.push_back(nums[idx]);
    helper(nums , idx+1,result , ans);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>result; 
        sort(nums.begin(),nums.end());
        helper(nums ,0,result,ans);
        vector<vector<int>>v(ans.begin(),ans.end());
        return v;
    }
