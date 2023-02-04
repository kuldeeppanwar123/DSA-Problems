void helper(vector<int>arr ,int ind,vector<vector<int>>&ans){
     if(ind==arr.size()){
        ans.push_back(arr);
        return;
     }
    for (int i = ind; i < arr.size(); i++)
    {
         swap(arr[i],arr[ind]);
         helper(arr,ind+1,ans);
         swap(arr[i],arr[ind]);
    }
    
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        helper(nums,0,ans);
        return ans;
    }
