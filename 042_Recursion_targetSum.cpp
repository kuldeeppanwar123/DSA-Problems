void helper(vector<int>&arr,int idx,int target , vector<int>result, vector<vector<int>>&ans){
    if(idx==arr.size()){
      if(target==0){
        ans.push_back(result);
        return;
      }
      else
        return;
    }

    helper(arr, idx+1,target,result,ans);
    result.push_back(arr[idx]);
    helper(arr, idx+1,target-arr[idx],result,ans);

}


vector<vector<int>>targetsum(vector<int>arr ,int target){
    vector<vector<int>>ans;
    vector<int>result;
    helper(arr,0,target ,result , ans);
    return ans;
}
