class Solution{
    int minEle;
    stack<int> s;
    stack<int>minm;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           if(minm.empty())return -1;
           return minm.top();
           //Write your code here
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(s.empty())return -1;
           int x = s.top();
           s.pop();
           minm.pop();
           return x;
           //Write your c;ode here
       }
       
       /*push element x into the stack*/
       void push(int x){
           (minm.empty())?minm.push(x):minm.push(min(x,minm.top()));
           s.push(x);
           //Write your code here
       }
};
