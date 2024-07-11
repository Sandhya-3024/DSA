Node* deleteNode(Node *head_ref, int x)
    {
        int cnt=1;
        if(x==1){
            head_ref=head_ref->next;//Delete first node
            return head_ref;
        }
        Node* temp=head_ref;
        while(temp!=NULL && cnt!=x){
            temp=temp->next;//traversing through the position
            cnt++;
            
        }
        if(temp->prev!=NULL){
            temp->prev->next=temp->next;//updating prev link
        }
        if(temp->next!=NULL){
            temp->next->prev=temp->prev;//updating next link
        }
        return head_ref;
        
        }
