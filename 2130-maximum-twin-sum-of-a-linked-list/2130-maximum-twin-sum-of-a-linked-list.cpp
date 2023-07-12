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
        
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
            
        }
        int maxsum=INT_MIN,sum=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(n-1-i>=0 and n-1-i<n){
                sum+=v[i];
                sum+=v[n-i-1];
            }
            maxsum=max(sum,maxsum);
            sum=0;
        }
        return maxsum;
    }
};