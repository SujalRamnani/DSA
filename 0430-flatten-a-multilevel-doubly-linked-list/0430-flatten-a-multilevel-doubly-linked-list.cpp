class Solution {
public:
    Node* flatten(Node* head) {

        if (head == NULL)
            return NULL;

        Node* curr = head;

        while (curr != NULL) {

            if (curr->child != NULL) {

                // Original next ko save karo
                Node* next = curr->next;

                // Child list flatten karo
                curr->next = flatten(curr->child);

                // Child ke first node ka prev
                curr->next->prev = curr;

                // Child remove
                curr->child = NULL;

                // Child flattened list ka tail find karo
                Node* tail = curr->next;

                while (tail->next != NULL) {
                    tail = tail->next;
                }

                // Tail ko original next se connect karo
                tail->next = next;

                if (next != NULL) {
                    next->prev = tail;
                }
            }

            curr = curr->next;
        }

        return head;
    }
};