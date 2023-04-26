int getCount (string S, int N)
        {
           map<char , int>m;
           for(int i=0; i<S.size(); i++){
               char ch = S[i];
               if(i==0 || S[i-1]!=S[i])
               m[ch]++;
               
           }
           
           int count =0;
           for(auto i:m){
               if(i.second==N)count++;
           }
           return count;
        }
