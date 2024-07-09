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
    ListNode* middleNode(ListNode* head) {
      //Tortoise&Hare method
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
//Approach 2(Brute force)
    int cnt=0;
    ListNode* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    int midnode=(cnt/2+1);
    ListNode* temp1=head;
    while(temp1!=NULL){
        midnode=midnode-1;
        if(midnode==0){
            return temp1;
            break;
        }
        else{
            temp1=temp1->next;
        }
    }
      return temp1;
    }
};
