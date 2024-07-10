/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      //Brute force
       /* int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(cnt==n) return head->next;
        int res=cnt-n;
        
        temp=head;
        while(temp!=NULL){
            res--;
            if(res==0){
                break;
            }
            temp=temp->next;
        }
        ListNode* delnode=temp->next;
        temp->next=temp->next->next;
        delete(delnode);
        return head;
    }*/

    ListNode* fast=head;
    ListNode* slow=head;
    for(int i=0;i<n;i++){
        fast=fast->next;
    }
    if(fast==NULL) return head->next;
    while(fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    ListNode* delnode=slow->next;
    slow->next=slow->next->next;
    delete(delnode);
    return head;
    }

};
