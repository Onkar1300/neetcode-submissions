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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> inorder;
        vector<int> result;
        TreeNode* node = root;
        while(node || !inorder.empty()){
            while(node){
                inorder.push(node);
                node = node->left;
            }
            node = inorder.empty()? nullptr: inorder.top(); inorder.pop();
            result.push_back(node->val);
            node = node->right;
        }
        return result;
    }
};