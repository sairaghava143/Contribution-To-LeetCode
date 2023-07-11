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
    ListNode* deleteMiddle(ListNode* head) {
        //brute force
//         if(head==NULL || head->next==NULL)return NULL;
        
//         ListNode*temp=head;
//         int n=0;
//         while(temp!=NULL){
//             n++;
//             temp=temp->next;
            
//         }
//         int mid=n/2;
//         if(n%2==0){
//             // mid--;
//         }
//         temp=head;
//         ListNode *prev=NULL;
//         for(int i=0;i<mid;i++){
//             prev=temp;
//             temp=temp->next;
//         }
//         if(prev!=NULL){
//             prev->next=temp->next;
//         }else{
//             head=temp->next;
//         }
        
//         return head;
        
        //practice
                if(head==NULL || head->next==NULL)return NULL;
        
        ListNode*temp=head;
        int n=0;
        while(temp!=NULL){
            n++;
            temp=temp->next;
            
        }
        int mid=n/2;
     
        temp=head;
        // ListNode *prev=NULL;
        for(int i=0;i<mid-1;i++){
            // prev=temp;
            temp=temp->next;
        }
        if(temp!=NULL){
            temp->next=temp->next->next;
        }
        
        return head;
        
//         //slow pointer and fast pointer approach
//         if(head==NULL || head->next==nullptr)return nullptr;
//         ListNode* slow=head;
//         ListNode* fast=head->next->next;
        
//         while(fast!=nullptr && fast->next!=nullptr){
//             fast=fast->next->next;
//             slow=slow->next;
//         }
//         slow->next=slow->next->next;
//         return head;
        
    }
};