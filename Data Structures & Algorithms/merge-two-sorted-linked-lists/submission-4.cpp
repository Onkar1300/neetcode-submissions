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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2){return list1;}
        ListNode* fhead = new ListNode(0);
        ListNode* merged = fhead;
        while(list1 && list2){
            if(list1->val < list2->val){
                fhead->next = list1;
                list1 = list1->next;
            }
            else{
                fhead->next = list2;
                list2 = list2->next;
            }
            fhead = fhead->next;
        }
        if(list1){
            fhead->next = list1;
        }
        if(list2){
            fhead->next = list2;
        }
        return merged->next;
    }
};