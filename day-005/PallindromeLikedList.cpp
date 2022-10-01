bool isPalindrome(Node *head)
    {
        //Your code here
          int num =0;
        for(Node*p = head ;p!=NULL; p = p->next){
            num = num*10+p->data;
        }
          int temp_num = num;
          int new_num = 0;
        while(num){
            int rem = num%10;
            num = num/10;
            new_num = new_num*10+rem;
        }
        return(new_num==temp_num)?true:false;
    }
