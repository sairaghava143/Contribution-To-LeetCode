class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) {
            return head;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* cur = head;
        
        int count = 0;
        while (cur != nullptr) {
            count++;
            cur = cur->next;
        }
        
        cur = head;
        while (count >= k) {
            ListNode* nextPrev = cur;
            ListNode* nextCur = prev;
            
            for (int i = 0; i < k; i++) {
                ListNode* temp = cur->next;
                cur->next = nextCur;
                nextCur = cur;
                cur = temp;
            }
            
            prev->next = nextCur;
            nextPrev->next = cur;
            prev = nextPrev;
            count -= k;
        }
        
        return dummy->next;
    }
};
