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
    ListNode* deleteMiddle(ListNode* head) {
       ListNode* slow=head;
        ListNode* fast=head;
        if(head==NULL || head->next==NULL) return NULL;
        fast=fast->next->next;//To Skip 1 iteration of slow
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* delnode=slow->next;
        slow->next=slow->next->next;
        delete(delnode);
        return head;
//Bruteforce
        int cnt=0;
        ListNode* temp=head;
        if(head==NULL || head->next==NULL) return NULL;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }   
        int res=floor(cnt/2);
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

    }
};
