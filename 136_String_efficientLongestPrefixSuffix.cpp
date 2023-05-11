// intuition-1
int lps(string s) {
	    // Your code goes hereint 
	    int n = s.size();
	    if(n<2)return 0;
	    
	    int i=1;
	    int len=0;
	    while(i<n){
	        if(s[i]==s[len]){
	            i++;
	            len++;
	        }
	        else{
	            i = i-len+1;
	            len=0;
	        }
	    }
	    return len;
	}


// intiution-2
// using KMP pattern searching algo's preprocessing. 

	int lps(string s) {
	    // Your code goes hereint 
	    int n = s.size();
	    int arr[n];
        int i=1; 
        arr[0] = 0;
        int len=0;
        int ans = 0;
        
        while(i<n){
            if(s[i]==s[len]){
                len++;
                arr[i] = len;
                i++;
            }
            else{
                if(len==0){
                    arr[i] = 0;
                    i++;
                }
                else{
                    len = arr[len-1];
                }
            }
        }
        return len;
	}
