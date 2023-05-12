//using KMP algo
string longestPrefix(string s) {
        int n=s.size();
        int i=1;
        int len=0;
        int lps[n];
        lps[0] = 0;
        while(i<n){
            if(s[i]==s[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len==0){
                    lps[i] =0;
                    i++;
                }
                else{
                    len = lps[len-1];
                }
            }
        }
        int ansLen = lps[n-1];
        string ans = s.substr(0,ansLen);
        return ans;
    }
