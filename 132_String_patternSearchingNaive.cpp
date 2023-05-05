vector <int> search(string pat, string txt)
        {
           vector<int>ans;
           int txtSize = txt.size();
           int patSize = pat.size();
           
           for(int i=0; i<txtSize; i++){
               
               int j=0;
               for(; j<patSize; j++){
                   if(i+j >=txtSize || txt[i+j]!=pat[j])
                   break;
               }
               
               if(j==patSize)
               ans.push_back(i+1);
           }
           if(ans.size()==0)
           ans.push_back(-1);
           
           return ans;
        }
