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
    ListNode* reverseList(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode* node1 = head;
        ListNode* node2 = node1->next;
        node1->next = nullptr;
        while(node2){
            ListNode* node3 = node2->next;
            node2->next = node1;
            node1 = node2;
            node2 = node3;
        }
        return node1;
    }
};
