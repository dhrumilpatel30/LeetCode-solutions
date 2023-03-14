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
    unsigned long long int ans;
    void sumNumber(TreeNode* root,int prev){
        if(NULL != root->left){
            sumNumber(root->left,prev*10+root->val);
        }
        if(NULL != root->right){
            sumNumber(root->right,prev*10+root->val);
        }
        else if(NULL == root->left){
            ans+=prev*10+root->val;
        }
    }
    int sumNumbers(TreeNode* root) {
        ans = 0;
        if(NULL != root){
            sumNumber(root,0);
        }
        return ans;
    }
};