
class Solution {
public:

int diameter(TreeNode* root){
    if(root==nullptr) return 0;
     int left=diameter(root->left);
     int right=diameter(root->right);
    
     return 1+max(left,right);
}
   int temp(TreeNode* root) {
      if(root==nullptr) return 0;
    int ans=diameter(root->left)+diameter(root->right);
    int left=temp(root->left);
    int right=temp(root->right);
    return max({ans,left,right});
    }
    int diameterOfBinaryTree(TreeNode* root) {
    return temp(root);
    }
};