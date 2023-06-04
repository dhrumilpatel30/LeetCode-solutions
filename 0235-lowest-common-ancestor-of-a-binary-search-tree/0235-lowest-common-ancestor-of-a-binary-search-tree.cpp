/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


class Solution {
public:
    int a;
    vector<TreeNode*> pan,qan,rough;
    void Traverse(TreeNode* root, TreeNode* p, TreeNode* q){
        rough.push_back(root);
        if(p == root){
            pan = rough;
            a--;
        }
        else if(q == root){
            qan = rough;
            q--;
        }
        if(0 == a)return;
        if(NULL != root->left)Traverse(root->left,p,q);
        if(0 == a)return;
        if(NULL != root->right)Traverse(root->right,p,q);
        rough.pop_back();
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        a=2;
        Traverse(root,p,q);
        TreeNode* ans;
        for(int i=0;i<pan.size() and i<qan.size();i++){
            if(pan[i] == qan[i])ans = pan[i];
            else break;
        }
        return ans;
    }
};