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
        ///1 ke baad se reverse karna hai toh 1 ko kahi store karna padega
        while(pos<left){
            before=temp;
            temp=temp->next;
            pos++;
        }
        //loop tuta abb pos==left matlab temp aagya left pe aur 1 bhi before mein store hogya

        //abb temp se matlab 2 se right tak reverse karna hai
        int times=right-left+1;
        ListNode* curr=temp;
        ListNode* prev=NULL;
        while(times--){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //curr aagya last node pe
        //2 se 4 tak reverse hogya 
        //abb pehle 2 ko last 5 se connect karo
        temp->next=curr;
        if (before){
            before->next=prev;
            return head;
        }
        return prev;


        
    }
};