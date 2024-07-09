bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }


//Brute force
   /* unordered_map<ListNode*,int>mp;
    ListNode* temp=head;
    while(temp!=NULL){
        mp[temp]++;
        if(mp[temp]>1) return true;
        temp=temp->next;
    }    
    return false;
    }*/
};
