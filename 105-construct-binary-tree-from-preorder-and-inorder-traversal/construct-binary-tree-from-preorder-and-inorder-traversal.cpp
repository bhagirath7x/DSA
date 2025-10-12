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
    int findPos(vector<int>& inorder, int target, int inStart, int inEnd) {
        for(int i = inStart; i <= inEnd; i++) {
            if(inorder[i] == target) return i;
        }
        return -1;
    }
    TreeNode* tree(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd, int &index) {
        if(inStart > inEnd) return NULL;
        TreeNode* root = new TreeNode(preorder[index]);
        int pos = findPos(inorder, preorder[index], inStart, inEnd);
        index++;

        root->left = tree(preorder, inorder, inStart, pos-1, index);
        root->right = tree(preorder, inorder, pos+1, inEnd, index);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inStart = 0, inEnd = inorder.size()-1;
        int index = 0;
        return tree(preorder, inorder, inStart, inEnd, index);
    }
};