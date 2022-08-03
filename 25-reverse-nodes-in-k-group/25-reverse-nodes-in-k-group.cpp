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
    ListNode* reverse(ListNode *first,ListNode* last){
        ListNode *prev=last;
        while(first!=last){
            auto *n=first->next;
            first->next=prev;
            prev=first;
            first=n;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k==1)return head;
        auto curr=head;
        for(int i=0;i<k;i++){
            if(curr==NULL)return head;
            curr=curr->next;
        }
        auto new_head=reverse(head,curr);
        head->next=reverseKGroup(curr,k);
        return new_head;
        
    }
};