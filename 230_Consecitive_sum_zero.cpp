 int maxLen(vector<int>&A, int n)
    {   sort(A.begin() , A.end());
    // for(int i:A)cout<<i<<" ";
        int idx = 0;
        for(;A[idx]<0; idx++);
        
        int negCount = idx;
        int posCount = n-idx;
        
        int negSum = 0;
        int posSum = 0;
        
        for(int i=0; i<negCount; i++)negSum+=A[i];
        for(int i=idx; i<n; i++)posSum+=A[i];
        
        int i=0;
        int j=n-1;
        int ans = 0;
        
        while(i<=j){
            long long int sum = (long long)(negSum+posSum);
            if(sum==0){
                ans = negCount+posCount;
                break;
            }
            else if(sum<0){
                negSum-=A[i];
                i++;
                negCount--;
            }
            else{
                posSum-=A[j];
                j--;
                posCount--;
            }
        }
        return ans;
        // Your code here
    }
