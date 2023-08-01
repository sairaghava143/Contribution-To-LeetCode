//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
struct Node
{
	int key;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    key = x;
	    left = NULL;
	    right = NULL;
	}
};

Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n);
void printPreorder(Node* node)
{
    if (node == NULL)
       return;
    cout << node->key << " ";
    printPreorder(node->left);
    printPreorder(node->right);
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int in[n],level[n];
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    for(int i=0;i<n;i++){
        cin>>level[i];
    }
    Node *root=NULL;
    root = buildTree(in, level, 0, n - 1,n);
    printPreorder(root);
    cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


/*Complete the function below
Node is as follows:
struct Node
{
    int key;
    struct Node* left, *right;
};
*/


Node* buildTreeUtil(std::unordered_map<int, int>& map, std::vector<int>& levelOrder, int start, int end) {
    if (start > end) {
        return NULL;
    }

    // First node in level order will be root
    int data = levelOrder[0];
    Node* node = new Node(data);

    // Erase the first element in level order
    levelOrder.erase(levelOrder.begin());

    // Split level order into two halves, one for the left subtree and one for the right subtree
    std::vector<int> leftLevelOrder, rightLevelOrder;

    for (int i = 0; i < levelOrder.size(); i++) {
        int val = levelOrder[i];

        if (map[val] < map[data]) {
            leftLevelOrder.push_back(val);
        }
        else {
            rightLevelOrder.push_back(val);
        }
    }

    // Recursively build the left and right subtrees
    node->left = buildTreeUtil(map, leftLevelOrder, start, map[data] - 1);
    node->right = buildTreeUtil(map, rightLevelOrder, map[data] + 1, end);

    return node;
}

Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd, int n) {
    // Create a map to efficiently find the index of an element in levelOrder
    std::unordered_map<int, int> map;
    for (int i = 0; i < n; i++) {
        map[inorder[i]] = i;
    }

    std::vector<int> levelOrderVec(levelOrder, levelOrder + n);

    return buildTreeUtil(map, levelOrderVec, iStart, iEnd);
}
