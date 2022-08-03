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
    bool isPalindrome(ListNode* head) {
        // slow and fast pointer approach
        ListNode *slow=head,*fast=head,*prev,*n;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

prev=slow;
                         slow=slow->next;

               prev->next=NULL;

        while(slow){
          n=slow->next;
            slow->next=prev;
            prev=slow;
            slow=n;
        }
        fast=head,slow=prev;
        while(slow){
            if(slow->val!=fast->val)return false;
            slow=slow->next;
            fast=fast->next;
        }
        return true;
    }
};