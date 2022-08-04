/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        //time O(n)  space O(n)
        // unordered_map<Node*,Node*>m;
        // Node *ptr=head;
        // while(ptr){
        //     m[ptr]=new Node(ptr->val);
        //     ptr=ptr->next;
        // }
        // ptr=head;
        // while(ptr){
        //     m[ptr]->next=m[ptr->next];
        //     m[ptr]->random=m[ptr->random];
        //     ptr=ptr->next;
        // }
        // return m[head];
        
        
          //time O(n)  space O(1)
        
        Node *node=head;
        while(node){
            Node *temp=node->next;
            node->next=new Node(node->val);
            node->next->next=temp;
            node=temp;
        }
        node =head;
        while(node){
            if(node->random){
                node->next->random=node->random->next;
            }
            node=node->next->next;
        }
        
        Node *ans=new Node(0);
        Node *temp=ans;
      
        node=head;
        while(node){
            temp->next=node->next;
            temp=temp->next;
            
            node->next=node->next->next;
            node=node->next;
        }
        return ans->next;
    }
};