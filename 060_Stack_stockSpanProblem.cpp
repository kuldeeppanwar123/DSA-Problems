vector <int> calculateSpan(int price[], int n)
    {
        vector<int>ans;
       stack<int>st;
       st.push(0);
       ans.push_back(1);
       
       for(int i=1; i<n; i++){
           while(!st.empty()&&price[st.top()]<=price[i])
           st.pop();
           int span = st.empty()?i+1:i-st.top();
           ans.push_back(span);
           st.push(i);
       }
       return ans;
       
    }
