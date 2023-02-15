void helper(stack<int>&s , int count ,int size){
        if(count==size/2){
            s.pop();
            return;
        }
        
        int temp = s.top();
        s.pop();
        helper(s,count+1,size);
        s.push(temp);
    }
    void deleteMid(stack<int>&s, int sizeOfStack)
    { 
        helper(s,0,sizeOfStack);
    }
