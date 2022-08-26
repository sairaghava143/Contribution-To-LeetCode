/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    void dfs(Node* curr,Node* node,vector<Node*>&visited){
        visited[node->val]=node;
        for(auto it:curr->neighbors){
            if(visited[it->val]==NULL){
                Node* newnode=new Node(it->val);
                node->neighbors.push_back(newnode);
                dfs(it,newnode,visited);
            }else{
                node->neighbors.push_back(visited[it->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node==NULL)return NULL;
        vector<Node*>visited(1000,NULL);
        Node* copy=new Node(node->val);
        visited[node->val]=copy;
        for(auto it:node->neighbors){
            if(visited[it->val]==NULL){
                Node* newnode=new Node(it->val);
                copy->neighbors.push_back(newnode);
                dfs(it,newnode,visited);
            }else{
                copy->neighbors.push_back(visited[it->val]);
            }
        }
        return copy;
    }
};