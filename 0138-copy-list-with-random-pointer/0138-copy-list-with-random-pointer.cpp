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
    // Step 1: Create a new node for each node in the original list and insert it in between the corresponding nodes
    Node* node = head;
    while (node) {
        Node* temp = node->next;
        node->next = new Node(node->val);
        node->next->next = temp;
        node = temp;
    }

    // Step 2: Copy the random pointers of the original nodes to the new nodes
    node = head;
    while (node) {
        if (node->random) {
            node->next->random = node->random->next;
        }
        node = node->next->next;
    }

    // Step 3: Separate the original list and the copied list
    Node* copiedHead = nullptr;
    Node* copiedTail = nullptr;
    node = head;
    while (node) {
        if (!copiedHead) {
            copiedHead = node->next;
            copiedTail = node->next;
        } else {
            copiedTail->next = node->next;
            copiedTail = copiedTail->next;
        }
        node->next = node->next->next;
        node = node->next;
    }

    return copiedHead;
}

};