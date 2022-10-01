public boolean isPalindrome(ListNode head) {
        Stack<Integer>st =new Stack<Integer>();
        
        int size=0;
        for(ListNode p=head; p!=null; p=p.next){
              size++;
        }
        int tempsize=size;
        size=size/2;
        ListNode p=head;
        
        for(int i=0;i<size;i++){
            st.push(p.val);
            p=p.next;
        }
        
        if(tempsize%2!=0){
            p=p.next;
        }
        for(int i=0; i<size; i++){
            int data = st.pop();
            
            if(data!=p.val)
                return false;
            p=p.next;
        }
          return true;  
        
    }
