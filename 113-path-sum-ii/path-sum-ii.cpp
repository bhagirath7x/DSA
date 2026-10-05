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
        void help(TreeNode* root, int sum, int targetSum,
              vector<int>& path, vector<vector<int>>& ans) {

        if(root == nullptr) return;

        sum += root->val;
        path.push_back(root->val);

        if(root->left == nullptr && root->right == nullptr) {
            if(sum == targetSum) {
                ans.push_back(path);
            }

            path.pop_back();
            return;
        }

        help(root->left, sum, targetSum, path, ans);
        help(root->right, sum, targetSum, path, ans);

        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> path;

        help(root, 0, targetSum, path, ans);

        return ans;
    }
};