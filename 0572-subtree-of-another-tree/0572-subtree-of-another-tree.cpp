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
    bool isSubtreeSame(TreeNode* root, TreeNode* subRoot){
        if(root->val != subRoot->val)return false;
        

        // cout<<root->left->val<<subRoot->left->val;
        if(root->left == NULL){
            if(subRoot->left != NULL)
                return false;
        }
        if(root->left != NULL){
            if(subRoot->left==NULL)
                return false;
        }
        if(root->right == NULL){
            if(subRoot->right!=NULL)
                return false;
        }
        if(root->right != NULL){
            if(subRoot->right==NULL)
                return false;
        }

        bool left=true,right=true;
        if(NULL != root->left){
            left = isSubtreeSame(root->left,subRoot->left);
        }
        if(NULL != root->right){
            right = isSubtreeSame(root->right,subRoot->right);
        }

        return left and right;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        queue<TreeNode*> bfs;
        bfs.push(root);
        while(!bfs.empty()){
            TreeNode* rough = bfs.front();
            bfs.pop();
            if(rough->val == subRoot->val)
                if(isSubtreeSame(rough,subRoot))
                    return true;
            if(NULL != rough->left)bfs.push(rough->left);
            
            if( NULL != rough->right)bfs.push(rough->right);
        }

        return false;
    }
};