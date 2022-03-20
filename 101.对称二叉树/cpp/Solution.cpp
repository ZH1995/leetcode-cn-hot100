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
    bool isSymmetric(TreeNode* root) {
        return root == nullptr || search(root->left, root->right);
    }

    bool search (TreeNode* p, TreeNode* q) {
        if (p == nullptr || q == nullptr) {
            return p == nullptr && q == nullptr;
        }
        if (p->val != q->val) {
            return false;
        }

        return search(p->left, q->right) && search(p->right, q->left);
    }
};