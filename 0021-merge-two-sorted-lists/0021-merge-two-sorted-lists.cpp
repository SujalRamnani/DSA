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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy1=new ListNode(-1);ListNode* t1=dummy1;
         ListNode* i=l1;
         ListNode* j=l2;
         while(i!=NULL && j!=NULL){
            if (i->val<=j->val){
                t1->next=i;
                t1=i;
                i=i->next;
            }
            else if (i->val>j->val){
                t1->next=j;
                t1=j;
                j=j->next;

            }
         }
         if(i==NULL){
            while(j!=NULL){
                 t1->next=j;
                t1=j;
                j=j->next;

            }
         }
         if (j==NULL){
            while(i!=NULL){
                t1->next=i;
                t1=i;
                i=i->next;
            }
         }
         return dummy1->next;
    }
};