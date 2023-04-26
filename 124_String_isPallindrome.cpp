int isPalindrome(string S)
	{
	   string t =S;
	   reverse(S.begin() , S.end());
	   return t==S;
	   
	}
