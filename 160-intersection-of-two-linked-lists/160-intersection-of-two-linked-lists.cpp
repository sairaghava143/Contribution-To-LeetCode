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
    int length(ListNode* head){
        int len=0;
        while(head){
            len++;
            head=head->next;
        }
        return len;
    }
                                                                                                                                                                                                                                
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // unordered_map<ListNode*,int>m;
        // while(headA){
        //     m[headA]++;
        //     headA=headA->next;
        // }
        // while(headB){
        //     if(m.count(headB)){
        //         return headB;
        //     }
        //     headB=headB->next;
        // }
        // return NULL;
        
        
        // optimized approach
        int m=length(headA);
        int n=length(headB);
        int diff=abs(m-n);
        if(n>m)swap(headA,headB);
        for(int i=0;i<diff;i++){
            headA=headA->next;
        }
        while(headA && headB){
            if(headA==headB)return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
        
    
    }
};