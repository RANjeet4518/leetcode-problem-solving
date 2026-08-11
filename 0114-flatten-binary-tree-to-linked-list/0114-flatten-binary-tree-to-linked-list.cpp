
class Solution {
public:
void preorder(TreeNode* root,vector<TreeNode*>& ans){
    if(root==nullptr){
        return;
    }
        ans.push_back(root);
        preorder(root->left,ans);
        preorder(root->right,ans);
}
    void flatten(TreeNode* root) {
        vector<TreeNode*> ans;
        preorder(root,ans);
        int i=1;
        TreeNode* temp=root;

        while(i<ans.size() && temp!=nullptr){
            temp->right=ans[i++];
            temp->left=nullptr;
            temp=temp->right;
        }

        
    }
};