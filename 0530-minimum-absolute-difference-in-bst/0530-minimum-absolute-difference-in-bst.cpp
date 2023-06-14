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
    int last,minDiff;

    void inorderTraversal(TreeNode* root){
        if(NULL == root)return;

        inorderTraversal(root->left);
        if(last != -1){
            minDiff = min(root->val - last, minDiff);
        }
        last = root->val;
        inorderTraversal(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        minDiff = 100005;
        last = -1;
        inorderTraversal(root);
        return minDiff;
    }
};