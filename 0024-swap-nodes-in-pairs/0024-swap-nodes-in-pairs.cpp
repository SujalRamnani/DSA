
class Solution {
public:
void reverse(ListNode* head,int times){
    ListNode* curr=head;
        ListNode* prev=NULL;
        while(times--){
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
            for(int i=0;i<(size-1);i++){
                if (right==NULL) break;
                 right=right->next;
            }
            if (right){
                ListNode* nextLeft=right->next;
                reverse(left,size);
                if (prevLeft)   prevLeft->next=right;
                prevLeft=left;
                if (res==NULL) res=right;
                left=nextLeft;  
            }

            else{
                //khatm sab
                if (prevLeft) prevLeft->next=left;
                if (res==NULL) res=left;
                break;
            }

        }
        return res;
        
    }
};