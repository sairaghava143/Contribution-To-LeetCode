/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool solve(TreeNode *root, int &targetSum, int sum)
        {
            if (!root) return false;
            if (root->left == NULL && root->right == NULL)
            {
                sum += root->val;
                if (sum == targetSum) return true;
                return false;
            }

            sum += root->val;

            return solve(root->left, targetSum, sum) || solve(root->right, targetSum, sum);
        }

    bool hasPathSum(TreeNode *root, int targetSum)
    {
        // if (root == NULL) return false;
        int sum = 0;

        if (solve(root, targetSum, sum)) return true;

        return false;
    }
};