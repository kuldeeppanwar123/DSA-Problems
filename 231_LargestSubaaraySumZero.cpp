int maxLen(vector<int>&A, int n)
    {   
        int ans = 0;
        int sum = 0;
        unordered_map<int,int>map;
        for(int i=0; i<n; i++){
             sum +=A[i];
            
            if(sum==0){
                ans = max(ans,i+1);
                continue;
            }
            
            if(map.find(sum)!=map.end()){
                int idx = map.find(sum)->second;
                ans = max(ans, i-idx);
            }
            else{
                map.insert({sum , i});
            }
        }
        
        return ans;
    }
