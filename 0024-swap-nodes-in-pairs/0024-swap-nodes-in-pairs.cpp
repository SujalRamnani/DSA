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
void reverse(ListNode* head,int size){
    ListNode* curr=head;
    ListNode* prev=NULL;
    while(size--){
        ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;

    }

}
    ListNode* swapPairs(ListNode* head) {
        if (head==NULL) return NULL;
        ListNode* left=head;
        ListNode* right;
        ListNode* prevLeft=NULL;
        int size=2;
        ListNode* res=NULL;
        while(true){
            right=left;
            for(int i=0;i<(size-1);i++) {
                if (right==NULL) break;
                right=right->next;
            }
            if (right){
                ListNode* leftNext=right->next;
                reverse(left,size);

                //abb agar prevleft hai toh 
                if (prevLeft) prevLeft->next=right;
                prevLeft=left; ///nhi hai previous left toh uska next right
                 if (res==NULL) res=right;
                left=leftNext;

            }
            else{
                //abb khatm right hai hi nhi
               if (prevLeft) prevLeft->next=left;
                if (res==NULL) res=left;
                break;


            }

        }
        return res;
        
    }
};