
class Solution {
public:
void InsertedTree(TreeNode* root,int val,TreeNode* temp){
   
    if(root->val > val && root->left==NULL){
        root->left=temp;
        return;
    }
     else if(root->val < val && root->right==NULL){
        root->right=temp;
        return;
    }
    if(root->val > val) InsertedTree(root->left,val,temp);
    else InsertedTree(root->right,val,temp);

}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode* temp=new TreeNode(val);
        if(root==NULL) return temp;
        InsertedTree(root,val,temp);
        return root;

        
    }
};