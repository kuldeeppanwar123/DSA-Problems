bool searchPattern(string str, string pat)
{
    // your code here
   int isfound =  str.find(pat);
   if(isfound==string::npos)
       return false;
    
   return true;
}
