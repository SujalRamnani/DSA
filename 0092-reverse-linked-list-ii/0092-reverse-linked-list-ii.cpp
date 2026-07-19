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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head==NULL || head->next==NULL) return head;
        int pos=1;
        ListNode* temp=head;
        ListNode* before=NULL;
        while(pos<left){
            before=temp;
            temp=temp->next;
            pos++;

        }
        ///abb temp aagya left pe
        //before usse pehle hai 
        ListNode* curr=temp;
        ListNode* prev=NULL;
        int times=right-left+1;
        while(times--){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ///abb curr aage poch gya 5 pe
         temp->next=curr;
       if (before){
         before->next=prev;
         return head;
       }
       
        return prev;
        
    }
};