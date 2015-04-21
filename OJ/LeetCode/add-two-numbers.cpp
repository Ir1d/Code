#include <bits/stdc++.h>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
     ListNode* tee = new ListNode(0);
     ListNode* t = tee;
     bool c = 0;int pre = 0;
     while (l1 || l2){
         if (l1)t->val = l1->val;
         if (l2)t->val += l2->val;
//	     else{
//			if (l1)t->val = l1->val + pre;
//			else t->val = l2->val + pre;
//			pre = 0;
//		}
         if (c){
             ++t->val;c = 0;
         }
         if (t->val >= 10){
             t->val -= 10;
             c = 1;
         }
         if (l1 && l1->next == NULL)pre = l1->val;
         if (l1)l1 = l1->next;
         
         if (l2 && l2->next == NULL)pre = l2->val;
         if (l2)l2 = l2->next;
         if (l1 || l2){
         	t->next = new ListNode(0);
	         t = t->next;
	     }
     }
     if (c){
     	t->next = new ListNode(1);
     }
     return tee;
        
    }
} S;
int main(){
	ListNode* l1 = new ListNode(9);
	l1->next = new ListNode(8);
	ListNode* l2 = new ListNode(1);
	ListNode* q = S.addTwoNumbers(l1,l2);
	while (q){
		printf("%d\n",q->val);
		q = q->next;
	}
	return 0;
}

