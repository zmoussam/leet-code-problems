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
    ListNode* swapPairs(ListNode* head) {
        ListNode *dummy = new ListNode(0, head);
        ListNode *prev = dummy;
        // ListNode **curr = &head;
        while (head && head->next)
        {
            ListNode *nxtPair = head->next->next;
            ListNode *second = head->next;

            second->next = head;
            head->next = nxtPair;
            prev->next = second;

            prev = head;
            head = nxtPair;

        }
        return dummy->next;
    }
};