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
    ListNode* sortList(ListNode* head) {
        if (head==NULL || head->next==NULL) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* temp=slow->next;
        slow->next=NULL; ///1st linkedlist ye

        ListNode* a=temp; //2nd linkedlist ye
        
        ///abb magic
        head=sortList(head);
        a=sortList(a);

        //abb merge two lists
        ListNode* i=head;ListNode* j=a;
        ListNode* dummy=new ListNode(-1);
        ListNode* tempp=dummy;
        while(i!=NULL && j!=NULL){
            if (i->val<=j->val){
                tempp->next=i;
                tempp=i;
                i=i->next;
            }
            else{
                tempp->next=j;
                tempp=j;
                j=j->next;
            }

        }

        if (i==NULL) tempp->next=j;
        else tempp->next=i;

        return dummy->next;
        
    }
};