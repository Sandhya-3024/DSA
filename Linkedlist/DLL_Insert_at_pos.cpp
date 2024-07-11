void addNode(Node *head, int pos, int data)
{
   Node* temp=head;
   int cnt=0;
   while(cnt<pos){
       temp=temp->next;
       cnt++;
   }
   
   Node* newnode=new Node(data);
   newnode->prev=temp;
   newnode->next=temp->next;
   temp->next=newnode;
}
