
class Solution {
public:  
    TreeNode* returnTree(TreeNode* root,int val){
        if(root == NULL) {
            return NULL;
        }

        if(root->val == val) {
            return root;
        }

        if(root->val < val)
            return searchBST(root->right, val);
        else
            return searchBST(root->left, val);
    }

    TreeNode* searchBST(TreeNode* root, int val) {
        return returnTree(root,val);
      
        
    }
};