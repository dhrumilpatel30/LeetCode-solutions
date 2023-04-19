class Solution {
public:
    int ans;
    void longestZigZag(TreeNode* root,bool direction){
        if(direction){
            if(root->left != NULL){
                bool status = true;;
                TreeNode* rough = root;
                int length=0;
                while(rough != NULL){
                    if(status)rough=rough->left;
                    else rough = rough->right;
                    status = !status;
                    length++;
                }
                ans=max(ans,length-1);
            }
        }
        if(root->left != NULL)longestZigZag(root->left,true);
        if(!direction){
            if(root->right != NULL){
                bool status = false;
                TreeNode* rough = root;
                int length=0;
                while(rough != NULL){
                    if(status)rough=rough->left;
                    else rough = rough->right;
                    status = !status;
                    length++;
                }
                ans=max(ans,length-1);
            }
        }
        if(root->right != NULL)longestZigZag(root->right,false);
    }
    int longestZigZag(TreeNode* root) {
        ans=0;
        if(root->left != NULL){
            bool status = true;
            TreeNode* rough = root;
            int length=0;
            while(rough != NULL){
                if(status)rough=rough->left;
                else rough = rough->right;
                status = !status;
                length++;
            }
            longestZigZag(root->left,true);
            ans=max(ans,length-1);
        }
        
        if(root->right != NULL){
            bool status = false;
            TreeNode* rough = root;
            int length=0;
            while(rough != NULL){
                if(status)rough=rough->left;
                else rough = rough->right;
                status = !status;
                length++;
            }
            longestZigZag(root->right,false);
            ans=max(ans,length-1);
        }
        return ans;
    }
};