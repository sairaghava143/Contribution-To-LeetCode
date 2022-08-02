/**
 *Definition for singly-linked list.
 *struct ListNode {
 *    int val;
 *    ListNode * next;
 *    ListNode() : val(0), next(nullptr) {}
 *    ListNode(int x) : val(x), next(nullptr) {}
 *    ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* addTwoNumbers(ListNode *l1, ListNode *l2)
        {
            int balance = 0, sum = 0;
            ListNode *head, *tail;
            head = tail = NULL;
            while (l1 && l2)
            {
                sum = (l1->val + l2->val + balance) % 10;
                balance = (l1->val + l2->val + balance) / 10;
                if (head == NULL)
                {
                    ListNode *n = new ListNode(sum);
                    head = tail = n;
                }
                else
                {
                    ListNode *n = new ListNode(sum);

                    tail->next = n;
                    tail = tail->next;
                }
                l1 = l1->next;
                l2 = l2->next;
            }
            while (l1)
            {
                sum = (l1->val + balance) % 10;
                balance = (l1->val + balance) / 10;
                if (head == NULL)
                {
                    ListNode *n = new ListNode(sum);
                    head = tail = n;
                }
                else
                {
                    ListNode *n = new ListNode(sum);

                    tail->next = n;
                        tail = tail->next;
                }

                l1 = l1->next;
            }
            while (l2)
            {
                sum = (l2->val + balance) % 10;
                balance = (l2->val + balance) / 10;
                if (head == NULL)
                {
                    ListNode *n = new ListNode(sum);
                    head = tail = n;
                }
                else
                {
                    ListNode *n = new ListNode(sum);
                    tail->next = n;
                        tail = tail->next;
                }
                l2 = l2->next;
            }
            if (balance)
            {
                if (head == NULL)
                {
                    ListNode *n = new ListNode(balance);
                    head = tail = n;
                }
                else
                {
                    ListNode *n = new ListNode(balance);
                    tail->next = n;
                        tail = tail->next;
                }
            }
            return head;
        }
};