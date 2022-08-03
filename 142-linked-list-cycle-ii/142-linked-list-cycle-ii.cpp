/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
                        if(slow==fast)break;

        }
        if(fast==NULL || fast->next==NULL)return NULL;
        fast=head;
        while(fast){
            if(slow==fast)return fast;
            slow=slow->next;
            fast=fast->next;
        }
    
       
        return NULL;
        
        //map approach
        // unordered_map<ListNode*,int>m;
        // while(head){
        //     if(m.count(head))return head;
        //     m[head]++;
        //     head=head->next;
        // }
        // return NULL;
    }
};