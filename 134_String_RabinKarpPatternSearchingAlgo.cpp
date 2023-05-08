        bool isMatch(string str , int idx , string pat){
            for(int i=0; i<pat.size(); i++){
                if(str[idx+i]!=pat[i])
                return false;
            }
            return true;
        }
        
        vector <int> search(string pat, string str)
        {
            vector<int>ans;
            int patval = 0;
            int strval =0;
            int d = 5;
            int q = INT_MAX;
            
            int patsize = pat.size();
            int strsize = str.size();
            
            int h=1;
            for(int i=1; i<patsize; i++)
            h=(h*d)%q;
            
            for(int i=0; i<patsize; i++){
                patval = (d*patval+pat[i])%q;
                strval = (d*strval+str[i])%q;
            }
        
            
            for(int i=0; i<=(strsize-patsize); i++){
              
                if(strval==patval && isMatch(str , i,pat))
                  ans.push_back(i+1);
                               
                if(i+patsize<strsize)
                 strval = fmod((d*(strval-str[i]*h)+str[i+patsize]),q);               
                
            }
            return ans;
        }
