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
    // Create a map that stores the mapping between the original nodes and the copied nodes
    unordered_map<Node*, Node*> map;

    // Create a dummy node to serve as the head of the copied list
    Node* copiedHead = new Node(INT_MIN);
    Node* copiedTail = copiedHead;

    // Iterate through the original list and create a new node for each node
    Node* node = head;
    while (node) {
        // Check if the current node has already been copied
        auto it = map.find(node);
        if (it == map.end()) {
            // If the current node has not been copied, create a new node and add it to the map
            map[node] = new Node(node->val);
        }
        // Append the copied node to the copied list
        copiedTail->next = map[node];
        copiedTail = copiedTail->next;

        // Check if the random pointer of the current node has already been copied
        if (node->random) {
            auto it = map.find(node->random);
            if (it == map.end()) {
                // If the random pointer has not been copied, create a new node and add it to the map
                map[node->random] = new Node(node->random->val);
            }
            // Set the random pointer of the copied node to the copied random node
            copiedTail->random = map[node->random];
        }
        // Move to the next node in the original list
        node = node->next;
    }

    // Remove the dummy node and return the head of the copied list
    Node* result = copiedHead->next;
    delete copiedHead;
    return result;


    }
};