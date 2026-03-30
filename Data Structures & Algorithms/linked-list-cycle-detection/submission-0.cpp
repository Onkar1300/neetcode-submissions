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
    bool hasCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        if(fast->next){
            fast = fast->next;
        }
        else{
            return false;
        }
        while(fast!=nullptr){
            if(fast==slow){
                return true;
            }
            if(fast->next && fast->next->next){
                fast= fast->next->next;
            }
            else{
                return false;
            }
            if(slow->next){
                slow= slow->next;
            }
            else{
                return false;
            }
        }
        return false;
    }
};
