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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* node = root;
        stack<TreeNode*> st;
        while(node){
            if(node->val == key){
                TreeNode* parent = st.empty() ? nullptr: st.top();
                
                // check both children
                if(node->right && node->left){
                    // Push left subtree on right subtree's left most leaf
                    TreeNode* rtree = node->right;
                    while(rtree->left){
                        rtree = rtree->left;
                    }
                    rtree->left = node->left;
                    if(st.empty()){root = root->right;}
                    else if(parent->left == node){
                        parent->left = node->right;
                    }
                    else{
                        parent->right = node->right;
                    }
                }
                // only one chilren
                else if(node->right){
                    if(st.empty()){root = root->right;}
                    else if(parent->left == node){
                        parent->left = node->right;
                    }
                    else{
                        parent->right = node->right;
                    }
                }
                else if(node->left){
                    if(st.empty()){root = root->left;}
                    else if(parent->left == node){
                        parent->left = node->left;
                    }
                    else{
                        parent->right = node->left;
                    }
                }
                else{
                    if(st.empty()){return nullptr;}
                    else if(parent->left == node){
                        parent->left = nullptr;
                    }
                    else{
                        parent->right = nullptr;
                    }
                }
                break;
            }
            // Not found
            else if(node->val > key){
                st.push(node);
                node = node->left;
            }
            else{
                st.push(node);
                node = node->right;
            }
        }
        return root;
    }
};