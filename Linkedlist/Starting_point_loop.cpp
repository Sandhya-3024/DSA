ListNode *detectCycle(ListNode *head) {
  //Bruteforce
    /*unordered_map<ListNode*,int>mp;
    ListNode* temp=head;
    while(temp!=NULL){
        if(mp.find(temp)!=mp.end()) return temp;
       else{
        mp[temp]=1;
        temp=temp->next;
       }
    }    
    return NULL;
    }*/

    ListNode* slow=head;
    ListNode* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return NULL;
    }
    
};
