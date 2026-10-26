
class Solution {
public:
int diameter(TreeNode* root,int& mx){
    if(root==nullptr) return 0;
     int left=diameter(root->left,mx);
     int right=diameter(root->right,mx);
     int path=left+right;
     mx=max(mx,path);
     return 1+max(left,right);
}
    int diameterOfBinaryTree(TreeNode* root) {
int mx=0;
     diameter(root,mx);
     return mx;
    }
};