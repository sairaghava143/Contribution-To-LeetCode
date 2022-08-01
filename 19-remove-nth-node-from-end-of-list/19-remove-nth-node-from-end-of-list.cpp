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
        count++;
        head=head->next;
    }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode *first,*second;
        // first=second=head;
        // while(n--){
        //     second=second->next;
        // }
        // if(second==NULL)return first->next;
        // while(second->next){
        //     first=first->next;
        //     second=second->next;
        // }
        // first->next=first->next->next;
        // return head;
        
        //brute force approach
        // int len=length(head);
        // int k=len-n;
        // ListNode *first=head;
        // if(k==0)return first->next;
        // for(int i=0;i<k-1;i++){
        //     first=first->next;
        // }
        // first->next=first->next->next;
        // return head;
        //brute force approach

       ListNode* headd,*front,*tail;
        headd=front=NULL;
        tail=head;
        if(headd==NULL){
                    headd=front=head;

        }
        while(n--){
            tail=tail->next;
        }
        if(tail==NULL)return headd->next;
        while(tail->next){
            front=front->next;
            tail=tail->next;
        }
        front->next=front->next->next;
        return headd;
    }
};