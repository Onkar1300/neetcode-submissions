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
        ListNode* previous = nullptr;
        ListNode* current = head;
        if(!head || !head->next){
            return head;
        }
        while(current->next){
            ListNode* temp = current->next;
            current->next = previous;
            previous = current;
            current = temp;
        }
        current->next = previous;
        return current;
    }
    void reorderList(ListNode* head) {
        int len = 0;
        ListNode *temp = head;
        while(temp){
            len++;
            temp=temp->next;
        }
        if(len<=2){return;}
        temp = head;
        ListNode* setNull;
        for(int i=0;i<(len+1)/2;i++){
            setNull = temp;
            temp = temp->next;
        }
        setNull->next = nullptr;
        ListNode* head2 = reverseList(temp);
        ListNode* head1 = head;
        ListNode* temp2;
        while(head1 && head2){
            temp = head1->next;
            temp2 = head2->next;
            head1->next = head2;
            head2->next = temp;
            head1 = temp;
            head2 = temp2;
        }
    }
};
