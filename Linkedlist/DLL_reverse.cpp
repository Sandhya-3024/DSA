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
//
stack<int>st;
    Node* temp=head;
    while(temp!=NULL){
       st.push(temp->data);
       temp=temp->next;
    }  
    temp=head;
    while(temp!=NULL){
        temp->data=st.top();
        st.pop();
        temp=temp->next;
    }
    return head;
//
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* current=head;
    Node* prev=NULL;
     while(current!=NULL){
         prev=current->prev;
         current->prev=current->next;
         current->next=prev;
         current=current->prev;
     }
     return prev->prev;//prev is current->prev
     //prev->prev is actually mean current
}

