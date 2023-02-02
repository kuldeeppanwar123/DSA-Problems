void helper(vector<int> arr , int idx, int target , vector<int> result,vector<vector<int>>&ans){

   if(target==0){
          ans.push_back(result);
          return;
   }
   
   for (int i = idx; i <arr.size(); i++)
   {
      if(i>idx && arr[i]==arr[i-1])continue;
      if(arr[i]>target)break;
          
        result.push_back(arr[i]);
        helper(arr,i+1,target-arr[i],result,ans);
        result.pop_back();
     
   }
   
 
}
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());

        vector<vector<int>>ans;
        vector<int>result;
        helper(arr , 0,target , result, ans);
        
        return ans;
    }
