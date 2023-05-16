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
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;

        while (head != NULL && head->next != NULL) {
            ListNode* first = head;
            ListNode* second = head->next;

            // Swapping nodes
            prev->next = second;
            first->next = second->next;
            second->next = first;

            // Moving to the next pair
            prev = first;
            head = first->next;
        }

        ListNode* newHead = dummy->next;
        delete dummy;

        return newHead;
    }
};

