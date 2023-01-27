int countSubset(int arr[], int n, int sum)
	{
        // Your code goes here
        if(n==0){
            return (sum==0)?1:0;
        }
        
        int count1 = perfectSum(arr , n-1 , sum);
        int count2 = perfectSum(arr , n-1 , sum-arr[n-1]);
        return count1+count2;
	}
