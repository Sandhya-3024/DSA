int findlength(Node* slow,Node* fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        cnt++;
        fast=fast->next;
    }
    return cnt;
}
int countNodesinLoop(struct Node *head)
{
    /*unordered_map<Node*,int>mp;
    Node* temp=head;
    int timer=1;
    int value=0;
    while(temp!=NULL){
        if(mp.find(temp)!=mp.end()){
            value=mp[temp];
            return (timer-value);
        }
        else{
            mp[temp]=timer;
            timer++;
            temp=temp->next;
        }
    }
    return 0;*/
    
    Node* slow=head;
    Node* fast=head;
    int cnt=0;
    while(fast!=NULL&& fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return findlength(slow,fast);
        }
    }
    return 0;
}
