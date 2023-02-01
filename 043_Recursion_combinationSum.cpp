    void helper(vector<int>arr , int idx, int target , vector<int>result,vector<vector<int>>&ans){
   
    if(idx==arr.size()){
        if(target==0)
          ans.push_back(result);
        return;
    }
 
    helper(arr, idx+1,target,result,ans);
    result.push_back(arr[idx]);
    if((target-arr[idx])>=0)
      helper(arr,idx,target-arr[idx],result,ans);

    // result.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>result;
        helper(candidates,0,target,result,ans);
        return ans;
    }
