class MyStack {
    queue<int>q1;
    queue<int>q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        while(!q1.empty()){
            int n = q1.front();
            q1.pop();
            q2.push(n);
        }
        q1.push(x);
        while(!q2.empty()){
            int n = q2.front();
            q2.pop();
            q1.push(n);
        }
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
