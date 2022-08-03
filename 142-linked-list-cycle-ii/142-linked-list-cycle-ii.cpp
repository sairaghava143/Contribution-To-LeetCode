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
           if(slow==fast)break;    ///this condition should come after the above two conditions manditatory

        }
        if(fast==NULL || fast->next==NULL)return NULL;
        slow=head;
        while(slow!=fast){
            // if(slow==fast)return fast;
            slow=slow->next;
            fast=fast->next;
        }
    
       
        // return NULL;
        return slow;
        
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