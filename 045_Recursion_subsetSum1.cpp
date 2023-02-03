void helper(vector<int>arr, int ind , int sum,vector<int>&ans){
    if(ind==arr.size()){
        ans.push_back(sum);
        return;
    }
    helper(arr,ind+1,sum,ans);
    helper(arr ,ind+1,sum+arr[ind],ans);
}

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        helper(arr,0,0,ans);
        return ans;
    }
