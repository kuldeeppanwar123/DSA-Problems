long long factorial(long long n){
        long long ans = 1;
        for(long long i=1; i<=n; i++){
            ans*=i;
        }
        return ans;
    }
    
    long long findRank(string str) {
        int n= str.size();
        int count[256] = {0};
        long long mul = factorial(n);
        long long ans = 1;
        
        for(int i=0; i<n; i++)
            count[str[i]]++;
        
        for(int i=1; i<256;i++)
            count[i]+=count[i-1]; 
        
        for(int i=0; i<n-1; i++){
            mul = mul/(n-i);
            ans = ans+count[str[i]-1]*mul;
            
            for(int j=str[i]; j<256; j++)
            count[j]--;
        }
        return ans;  
    }
