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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* current = head;
        int count = 0;
        while (current != nullptr && count < k) {
            current = current->next;
            count++;
        }
        if (count == k) {
            current = reverseKGroup(current, k);
            while (count-- > 0) {
                ListNode* temp = head->next;
                head->next = current;
                current = head;
                head = temp;
            }
            head = current;
        }
        return head;
    }
};