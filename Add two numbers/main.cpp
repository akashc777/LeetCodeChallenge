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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ptr1, *ptr2, *ansptr, *ptr3;
        ptr1 = l1; ptr2=l2;
        int a=0,b=0,sum=0,c=0;
        ansptr = new ListNode(0);
        ptr3 = ansptr;
        while(ptr1 || ptr2){
            a = ptr1 ? ptr1->val: 0;
            b = ptr2 ? ptr2->val: 0;
            sum = a + b + c;
            c = sum/10;
            ptr3->next = new ListNode(sum % 10);
            ptr3 =  ptr3->next;
            ptr1 = ptr1 ?ptr1->next:NULL ;
            ptr2 = ptr2 ?ptr2->next:NULL;
            
        }
        if (c > 0) {
        ptr3->next = new ListNode(c);
        }
        return ansptr->next;
        
        
    }
};