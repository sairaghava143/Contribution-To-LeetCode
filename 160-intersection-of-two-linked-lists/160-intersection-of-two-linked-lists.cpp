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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*,int>m;
        while(headA){
            m[headA]++;
            headA=headA->next;
        }
        while(headB){
            if(m.count(headB)){
                return headB;
            }
            headB=headB->next;
        }
        return NULL;
    }
};