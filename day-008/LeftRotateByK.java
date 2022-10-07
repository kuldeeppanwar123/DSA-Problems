
void swap(long[]a , int l , int h){
        long temp = a[l];
        a[l] = a[h];
        a[h] = temp;
    }

    void Reverse(long[] a , int low , int high){
	    while(low<high){
	        swap(a,low , high);
	        low++;
	        high--;
	    }
	}
		 
    void leftRotate(long arr[], int k,int n)
    {
          k = k%n;
	   Reverse(arr , 0 ,k-1);
	   Reverse(arr , k ,n-1);
	   Reverse(arr , 0 ,n-1);
    }
