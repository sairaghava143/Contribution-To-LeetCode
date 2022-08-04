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
    int length(ListNode*head){
        int count=0;
        while(head){
            head=head->next;
            count++;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next || k==0)return head;
        int len=length(head);
        ListNode *curr=head;
        while(curr->next){
            curr=curr->next;
        }
        curr->next=head;
        k=k%len;
        k=len-k;
        while(k--){
            curr=curr->next;
            
        }
        head=curr->next;
        curr->next=NULL;
        return head;
    }
};