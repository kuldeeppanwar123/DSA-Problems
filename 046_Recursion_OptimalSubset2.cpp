    void helper(vector<int>arr,int ind , vector<int>result,vector<vector<int>>&ans){
        ans.push_back(result);
        for(int i=ind; i<arr.size(); i++){
            if(i!=ind &&arr[i]==arr[i-1])continue;
            result.push_back(arr[i]);
            helper(arr,i+1,result,ans);
            result.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>result; 
        sort(nums.begin(),nums.end());
        helper(nums,0,result,ans);
        return ans;
    }
