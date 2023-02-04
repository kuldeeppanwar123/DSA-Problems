    void helper(vector<int>&arr, vector<int>&result,vector<int>map, vector<vector<int>>&ans){
   
   if(arr.size()==result.size()){
    ans.push_back(result);
    return;
   }
 for (int i = 0; i < arr.size(); i++)
 {
    if(map[i]!=1){
       result.push_back(arr[i]);
       map.at(i)=1;
       helper(arr,result,map,ans);
       result.pop_back();
       map.at(i)=0;
    }
 }
 
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>result;
        vector<int>map(nums.size(),0);
        helper(nums,result,map,ans);
        return ans;
    }
