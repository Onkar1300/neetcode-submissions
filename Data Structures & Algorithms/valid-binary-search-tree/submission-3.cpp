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

    bool isValidBST(TreeNode* root) {
        queue<pair<TreeNode* , pair<int, int>>> q; //pair of node, max,min
        q.push({root, {INT_MAX, INT_MIN}});
        while(!q.empty()){
            TreeNode* temp = q.front().first;
            int temp_min = q.front().second.second;
            int temp_max = q.front().second.first;
            if(temp->val >= temp_max || temp->val <= temp_min){
                return 0;
            }
            if(temp->left){
                q.push({temp->left, {temp->val, temp_min}});
            }
            if(temp->right){
                q.push({temp->right, {temp_max, temp->val}});
            }
            q.pop();
        }
        return 1;
    }
};
