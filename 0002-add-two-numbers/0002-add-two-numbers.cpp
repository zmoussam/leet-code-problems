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
        ListNode *result = new ListNode(0, NULL);
        ListNode *r = result;
        int c = 0;
        while (l1 || l2 || c)
        {
            if (l1) r->val += l1->val;
            if (l2) r->val += l2->val;
            c = r->val / 10;
            r->val = r->val % 10;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
            if (l1 || l2 || c != 0)
                r->next = new ListNode(c, NULL);
            r = r->next;
        }
        return result;
    }

};