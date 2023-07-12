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
    int pairSum(ListNode* head) {
        //brute force
        
//         vector<int>v;
//         while(head){
//             v.push_back(head->val);
//             head=head->next;
            
//         }
//         int maxsum=INT_MIN,sum=0;
//         int n=v.size();
//         for(int i=0;i<n;i++){
//             if(n-1-i>=0 and n-1-i<n){
//                 sum+=v[i];
//                 sum+=v[n-i-1];
//             }
//             maxsum=max(sum,maxsum);
//             sum=0;
//         }
//         return maxsum;
        
        //using slow and fast pointer approach
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast && fast->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        //reverse second half
        
        ListNode* prev=nullptr;
        ListNode* next=nullptr;
        
        while(slow){
            next=slow->next;
            slow->next=prev;
            prev=slow;
            slow=next;
        }
        
        int maxsum=0;
        
        //cal sum of twins and getting maxsum
        
        while(prev){
            maxsum=max(maxsum,head->val+prev->val);
            head=head->next;
            prev=prev->next;
        }
        return maxsum;
    }
};