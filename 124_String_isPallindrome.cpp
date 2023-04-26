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
