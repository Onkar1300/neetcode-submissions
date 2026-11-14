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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        int i=0;
        vector<vector<int>> v;
        if(!root){
            return v;
        }
        q.push({root,i});
        while(!q.empty()){
            TreeNode* tempnode = q.front().first;
            if(tempnode->left){q.push({tempnode->left,q.front().second+1});}
            if(tempnode->right){q.push({tempnode->right,q.front().second+1});}
            if(v.size()<(q.front().second+1)){
                vector<int> temp;
                v.push_back(temp);
            }
            v[q.front().second].push_back(q.front().first->val);
            q.pop();
        }
        return v;
    }
};
