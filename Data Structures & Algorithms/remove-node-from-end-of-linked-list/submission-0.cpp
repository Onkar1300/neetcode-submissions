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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0;
        ListNode* dummy = head;
        while(dummy){
            len++;
            dummy = dummy->next;
        }
        int target = len-n+1;
        if(target==1){
            head = head->next;
        }
        else {
            ListNode* prev = head;
            ListNode* curr = head;
            while(--target){
                prev = curr;
                curr = curr->next;
            }
            prev->next = curr->next;
        }
        return head;
    }
};
