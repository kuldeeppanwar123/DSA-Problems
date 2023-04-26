int isPalindrome(string S)
	{
	   string t =S;
	   reverse(S.begin() , S.end());
	   return t==S;
	   
	}




int isPalindrome(string S)
	{
	   int s = 0;
	   int e = S.size()-1;
	   while(s<=e){
	       if(S[s]!=S[e])return 0;
	       e--;
	       s++;
	   }
	   return 1;
	}



int isPalindrome(string S,int s, int e ){
	    if(s>e)return 1;
	    if(S[s]!=S[e])return 0;
	    
	    return isPalindrome(S , s+1, e-1);
	}
    int isPalindrome(string s){
        return isPalindrome(s , 0 ,s.size()-1);
    }
