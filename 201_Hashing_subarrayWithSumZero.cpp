bool subArrayExists(int arr[], int n)
    {
        unordered_set<int>set;
        int pre_sum=0;
        for(int i=0; i<n; i++){
            pre_sum+=arr[i];
            
            if(pre_sum==0 || set.find(pre_sum)!=set.end()){
                return true;
            }
            else{
                set.insert(pre_sum);
            }
        }
        return false;
        //Your code here
    }
