Node* constructDLL(vector<int>& arr) {
        
        Node* head=new Node(arr[0]);
        Node* prev=head;
        for(int i=1;i<arr.size();i++){
            Node* temp=new Node(arr[i]);
            temp->next=NULL;
            temp->prev=prev;
            prev->next=temp;
            prev=prev->next;
            
        }
        return head;
    }
