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
    int max;
    void maxdepth1(TreeNode* root,int max1){
        if(max < max1)max=max1;
        
        if(root->left != NULL)maxdepth1(root->left,max1+1);
        if(root->right != NULL)maxdepth1(root->right,max1+1);
    }
    int maxDepth(TreeNode* root) {
        max=0;
        if(root == NULL) return 0;
        maxdepth1(root,1);
        return max;
    }
};