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
//0-based indexing
 Node* insert(int k, int val, Node *head) {
    Node* newNode = new Node(val);
    if(head==NULL){
        return NULL;
    }

    if (head==NULL && k == 0) {
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    if(k==0){
        newNode->next=head;
        newNode->prev=NULL;
        return newNode;
    }
    int cnt=0;
    Node* temp = head;
    while (temp != NULL) {
        cnt++;
        if(cnt==k){
            newNode->next=temp->next;
            temp->next=newNode;
            newNode->prev=temp;
            break;
        }
        temp = temp->next;
    } 
    return head;
}
 

