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
    ListNode* partition(ListNode* head, int x) {
        if (head==NULL || head->next==NULL) return head;
      ///2 dummy nodes use karenge idhar
      ListNode* dummy1=new ListNode(-1);ListNode* smaller=dummy1;  
       ListNode* dummy2=new ListNode(-1);ListNode* larger=dummy2;
       ListNode* temp=head;
       while(temp!=NULL){
        if (temp->val<x){
            smaller->next=temp;
            smaller=temp;
        }
        else{
            larger->next=temp;
            larger=temp;

        }
        temp=temp->next;
       } 
         
         smaller->next=dummy2->next;
         larger->next=NULL;
         return dummy1->next;


    }
};