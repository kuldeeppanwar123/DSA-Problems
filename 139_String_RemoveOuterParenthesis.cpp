string removeOuterParentheses(string s) {
        int count=0;
        string ans ="";

         for(char ch:s){
             if(ch=='(' && count++ > 0)
                 ans+=ch;

             if(ch==')' && count-- > 1)
                 ans+=ch;
         }
          return ans;
    }
