class MinStack {
    stack<int>s;
    stack<int>minm;
public:
    MinStack() {
        
    }
    
    void push(int x) {
        if(minm.empty())minm.push(x);
        else if(x<=minm.top())minm.push(x);
        s.push(x);
    }
    
    void pop() {
        if(s.top()==minm.top())minm.pop();
           s.pop();        
    }
    
    int top() {
       return s.top(); 
    }
    
    int getMin() {
       return minm.top();
    }
};
