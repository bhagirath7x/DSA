/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int helper(TreeNode* root, int &maxSum) {
        if(root == nullptr) 
        return 0;

        int l = helper(root->left, maxSum);
        int r = helper(root->right, maxSum);

        int lrn = (l + r + root->val);

        int maxOfLeftRight = max(l, r) + root->val;

        int rootAns = root->val;

        maxSum = max({maxSum, lrn, maxOfLeftRight, rootAns});

        return max(maxOfLeftRight, rootAns);
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;

        helper(root, maxSum);

        return maxSum;
    }
};