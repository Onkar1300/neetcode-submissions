class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* node = root;
        TreeNode* parent = nullptr;

        // 1. Search for target node and track its parent
        while (node && node->val != key) {
            parent = node;
            if (key < node->val) {
                node = node->left;
            } else {
                node = node->right;
            }
        }

        // Key not found
        if (!node) {
            return root;
        }

        // 2. Determine replacement subtree for `node`
        TreeNode* replacement = nullptr;
        if (!node->left) {
            replacement = node->right;
        } else if (!node->right) {
            replacement = node->left;
        } else {
            // Both children exist: promote node->right, attach node->left
            // to the leftmost node of node->right
            replacement = node->right;
            TreeNode* leftmost = replacement;
            while (leftmost->left) {
                leftmost = leftmost->left;
            }
            leftmost->left = node->left;
        }

        // 3. Reconnect replacement to parent (or update root)
        if (!parent) {
            return replacement;
        }
        if (parent->left == node) {
            parent->left = replacement;
        } else {
            parent->right = replacement;
        }

        return root;
    }
};