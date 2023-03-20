void modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>st;
    for(int i=1; i<=k; i++){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    for(int i=1; i<=(q.size()-k);i++){
        q.push(q.front());
        q.pop();
    }
    return q;
}
