// intuition-1 (Naive)

int findSmallerInRight(string str, int low, int high)
{
	int countRight = 0, i;
	for (i = low + 1; i <= high; ++i)
		if (str[i] < str[low])
			++countRight;
	return countRight;
}

int findRank(string str)
{
	int len = str.size();
	int mul = fact(len);
	int rank = 1;
	int countRight;
	int i;
	for (i = 0; i < len; ++i) {
		mul /= len - i;
		// Count number of chars smaller than str[i]
		// from str[i+1] to str[len-1]
		countRight = findSmallerInRight(str, i, len - 1);
                rank += countRight * mul;
	}
	return rank;
}




// intuition-2 (Optimal)    
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
