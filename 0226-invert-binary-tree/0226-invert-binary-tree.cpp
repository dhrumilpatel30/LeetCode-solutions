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
    TreeNode* nextTree;
    void invertTree(TreeNode* root,TreeNode* rough) {
        cout<<root->val;
        if(NULL != root->right){
            rough->left = new TreeNode(root->right->val);
            invertTree(root->right,rough->left);
        }
        if(NULL != root->left){
            rough->right = new TreeNode(root->left->val);
            invertTree(root->left,rough->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        if(NULL == root)return nextTree;
        nextTree = new TreeNode(root->val);
        if(NULL != root->right){
            nextTree->left = new TreeNode(root->right->val);
            invertTree(root->right,nextTree->left);
        }
        if(NULL != root->left){
            nextTree->right = new TreeNode(root->left->val);
            invertTree(root->left,nextTree->right);
        }
        return nextTree;
    }
};