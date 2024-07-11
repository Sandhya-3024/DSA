Node * insert(Node * head, int n, int pos, int val) {
       Node* newNode=new Node(val);
       if(head==NULL){
         if (pos == 0) {
           return newNode;
         }
         else{
             return head;
         }
       }       
        if(pos==0){
        newNode->next=head;
        return newNode;
      }
      int cnt=0;
      Node* temp=head;
      while(temp!=NULL){
          cnt++;
          if(cnt==pos){
              newNode->next=temp->next;
              temp->next=newNode;
              break;
          }
          temp=temp->next;   
      }      
return head;
}
