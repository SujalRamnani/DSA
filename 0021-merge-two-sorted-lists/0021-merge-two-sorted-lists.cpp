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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        ListNode* i=a;
        ListNode* j=b;
        while(i!=NULL && j!=NULL){
            if (i->val<=j->val){
                temp->next=i;
                temp=i;
                i=i->next;

            }
            else{
                temp->next=j;
                temp=j;
                j=j->next;
            }
        }
        if (i==NULL) temp->next=j;
        else temp->next=i;
        // while(j!=NULL){
        //     temp->next=j;
        //     temp=j;
        //     j=j->next;
        // }
        //  while(i!=NULL){
        //     temp->next=i;
        //     temp=i;
        //     i=i->next;
        // }
        return dummy->next;

        
    }
};