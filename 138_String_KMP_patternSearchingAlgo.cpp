void fillLps(string pat , int*lps){
            int n = pat.size();
            lps[0] = 0;
            int i=1;
            int len=0;
            
            while(i<n){
                if(pat[i]==pat[len]){
                    len++;
                    lps[i] = len;
                    i++;
                }
                else{
                    if(len==0){
                       lps[i] = 0;
                       i++;
                    }
                    else{
                       len = lps[len-1];
                    }
                }
            }
            
        }
        vector <int> search(string pat, string txt)
        {
            int patLen = pat.size();
            int txtLen = txt.size();
            int lps[patLen];
            vector<int>ans;
            fillLps(pat , lps);
            
            int i=0;
            int j=0;
            
            while(i<txtLen){
                if(txt[i]==pat[j]){
                    i++;
                    j++;
                }
                if(j==patLen){
                    ans.push_back(i-j+1);
                    j = lps[j-1];
                }
                
                else if(i<txtLen && txt[i]!=pat[j] ){
                    if(j==0){
                        i++;
                    }
                    else{
                        j = lps[j-1];
                    }
                }
            }
            return ans;
        }
