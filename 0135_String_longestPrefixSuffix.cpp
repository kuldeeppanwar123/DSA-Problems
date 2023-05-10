// intuition 1
string longestPrefix(string s) {
       int len = s.size();
       string ans = "";
        for(int i=1; i<len; i++){
            string s1 = s.substr(0 , i);
            string s2 = s.substr(len-i,i);
            if(s1==s2)
              ans = s1;
        }
        return ans;
 }



// intuition 2
string longestPrefix(string s) {
        int len = s.size();
        string ans = "";
        string s1 = "";
        string s2 = "";
        for(int i=0; i<len-1; i++){
            s1 = s1+s[i];
            s2 = s[len-1-i]+s2;
            if(s1==s2)
              ans = s1;
        }
        return ans;
  }



// intution 3
string longestPrefix(string s) {
        int len = s.size();
        string ans = "";
        string s1 = s;
        string s2 = s;
        for(int i=1; i<len; i++){
           s1.erase(len-i , 1);
           s2.erase(0,1);
            if(s1==s2)
              {  ans = s1;
                  break;
              }
        }
        return ans;
    }
