Node*reverseList(Node*head)
    {
        // code here
        if(head==NULL || head->next==NULL)
        return head;
        
        Node*prev = NULL;
        Node*curr = head;
        
        while(curr!=NULL){
            Node*next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
class Solution{
    //Function to add two numbers represented by linked list.
    public:
     Node* addTwoLists(Node*first, Node*second){
        // code here
        // return head of sum list
        first = reverseList(first);
        second = reverseList(second);
        
        Node*temp = NULL;
        Node*prev = NULL;
        Node*head = NULL;
        Node*n = first;
        Node*m = second;
        
        int sum = 0;
        int carry=0;
        
        while(n!=NULL || m!=NULL){
            sum = (n?n->data:0) + (m?m->data:0) + carry;
            carry = (sum>9)?1:0;
            sum = sum%10;
            
            temp = new Node(sum);
            
            if(head==NULL)
            head = temp;
            else
            prev->next = temp;
            
            prev = temp;
            
            if(n) n = n->next;
            if(m) m = m->next;
        }
        if(carry>0)
         {
             temp = new Node(carry);
             prev->next = temp;
         }
         return reverseList(head);
    }
