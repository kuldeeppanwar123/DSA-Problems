int calculate(int a,int b, char op){
    switch (op)
    {
    case '+':
        return a+b;
    case '-':
        return a-b;
    case '*':
        return a*b;
    case '/':
        return a/b;
    case '^':
       { return round(pow(a,b));}
  
    }
}

int evaluatePrefix(string s){
    stack<int>st;
    for(int i=s.length()-1; i>=0; i--){
        if(s[i]==' ')continue;

        else if(isdigit(s[i])){
         int j= i;
         int num=0;
         while (i>=0 && isdigit(s[i]))
          i--;
          i++;
          
          for(int k=i; k<=j; k++){
          num = num*10+(s[k]-'0');
          }
        //  cout<<num<<endl;
         st.push(num);
        }
        else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            int c = calculate(a,b,s[i]);
            st.push(c);
        }
    }
    return st.top();
}
