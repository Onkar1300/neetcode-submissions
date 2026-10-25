class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* slowPointer = head;
        ListNode* fastPointer = head;

        // Ensure fastPointer and the next node exist to prevent null pointer dereference
        while (fastPointer != nullptr && fastPointer->next != nullptr) {
            // Advance the pointers first
            slowPointer = slowPointer->next;
            fastPointer = fastPointer->next->next;

            // Then check if they have met
            if (slowPointer == fastPointer) {
                return true;
            }
        }

        return false;
    }
};