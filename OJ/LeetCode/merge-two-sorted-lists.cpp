/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == l2 && l1 == NULL)return NULL;
        ListNode* tee = new ListNode(0);
        ListNode* t = tee;
        while (l1 || l2){
            if (l2 == NULL || (l1 != NULL && l1->val < l2->val)){
                t->val = l1->val;
                l1 = l1->next;
            }else {
                t->val = l2->val;
                l2 = l2->next;
            }
            if (l1 || l2){
                t->next = new ListNode(0);
                t = t->next;
            }
        }
        return tee;
    }
};