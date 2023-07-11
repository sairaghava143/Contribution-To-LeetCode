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
    ListNode* oddEvenList(ListNode* head) {
        if(!head )return head;
        ListNode* oddhead=new ListNode();
        ListNode* evenhead=new ListNode();
        ListNode* oddtail=oddhead;
        ListNode* eventail=evenhead;
        int index=1;
        while(head){
            if(index%2==1){
                oddtail->next=head;
                oddtail=oddtail->next;
            }else{
                eventail->next=head;
                eventail=eventail->next;
            }
            index++;
            head=head->next;
        }
        eventail->next=NULL;
        oddtail->next=evenhead->next;
        return oddhead->next;
        
    }
};