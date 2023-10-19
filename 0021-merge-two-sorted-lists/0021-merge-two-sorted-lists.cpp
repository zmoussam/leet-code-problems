/**
 * Definition for singly-linked list.
 */
 struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(0);
        ListNode **cur = &dummy->next;

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                *cur = new ListNode(list1->val);
                cur = &(*cur)->next;
                list1 = list1->next;
            }
            else 
            {
               *cur = new ListNode(list2->val);
                cur = &(*cur)->next;
                list2 = list2->next; 
            }
        }
        if (list1)
            *cur = list1;
        if (list2)
            *cur = list2;
        return dummy->next;
    }
};