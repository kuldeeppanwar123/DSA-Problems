string reverseWords(string s) {
        stack<string>st;

        int i=0;
        while(true){
            if(i==s.size())break;

            string str;
            while(i<s.size() && s[i]!=' '){
                str+=s[i];
                i++;
            }
            while(i<s.size() && s[i]==' '){
                i++;
            }
            if(!str.empty())
            st.push(str);
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            ans+=' ';
            st.pop();
        }
        return ans.substr(0, ans.size()-1);
    }
