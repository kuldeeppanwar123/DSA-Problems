bool detectLoop(Node* head)
    {
        for(Node*p=head; p!=NULL; p = p->next){
            if(hm.find(p)!=hm.end()){
                return true;
            }
            hm.insert(p);
            
        }
        return false;
    }
