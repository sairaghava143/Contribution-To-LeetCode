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
        vector<int>v,v1;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        v1=v;
        reverse(v1.begin(),v1.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=v1[i])return false;
        }
        return true;
    }
};