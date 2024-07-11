//Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* temp=new Node(x);
       temp->next=head;
       head=temp;
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
      
      Node* newNode=new Node(x);
      if(head==NULL){
          return newNode;
      }
      Node* temp=head;
      while(temp->next!=NULL){
          temp=temp->next;
      }
      temp->next=newNode;
      return head;
    }
