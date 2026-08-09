
class Solution {
public: 

    void GreaterSumTree(TreeNode* root,int& sum){
        if(root==nullptr) return;
        GreaterSumTree(root->right,sum);
        sum+=root->val;
        root->val=sum;
        GreaterSumTree(root->left,sum);
    }
    TreeNode* bstToGst(TreeNode* root) {
       
       int sum=0;
         GreaterSumTree(root,sum);
         return root;


        
    }
};