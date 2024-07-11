Node* reverseDLL(Node * head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->prev=next;
        curr->next=prev;
        
        prev=curr;
        curr=next;
    }
    return prev;
    
}
