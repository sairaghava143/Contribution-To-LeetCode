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
    ListNode* deleteDuplicates(ListNode* temp) {
        if(temp==NULL)return NULL;
        set<int>s;
        ListNode* head=temp;
        while(head){
            s.insert(head->val);
            head=head->next;
            
        
        }
        ListNode * x=new ListNode(temp->val);
        ListNode *y=x;
        for(auto &it:s){
         x->next=new ListNode(it);
           x=x->next;
        }
        return y->next;
    }
};