ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode*n = l1;
        ListNode*m = l2;
        ListNode*head = NULL;
        ListNode*curr = NULL;
        ListNode*prev = NULL;
        bool isfirst = true;
        int rem = 0;
        int sum , value;
        
        while(n!=NULL && m!=NULL){
          sum = n->val+m->val+rem;
          value = sum%10;
            rem = sum/10;
            
            curr = new ListNode(value);
            
            if(isfirst){
                head = curr;
                prev = curr;
                isfirst = false;
            }
            else{
                prev->next = curr;
                prev = curr;
            }
            n = n->next;
            m = m->next;
        }
        
        while(n!=NULL){
         sum = n->val+rem;
         value = sum%10;
         rem = sum/10;
            curr = new ListNode(value);
            prev->next = curr;
            prev = curr;
            n = n->next;
        }
         while(m!=NULL){
         sum = m->val+rem;
         value = sum%10;
         rem = sum/10;
            curr = new ListNode(value);
            prev->next = curr;
            prev = curr;
            m = m->next;
        }
        
        if(rem!=0){
            curr = new ListNode(rem);
            prev->next = curr;
        }
        return head;
    }
