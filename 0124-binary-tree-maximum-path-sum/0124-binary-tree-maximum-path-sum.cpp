
class Solution {
public:
int mx;
int lineSum(TreeNode* root){
    if(root==nullptr) return 0;
    int left=lineSum(root->left);
    int right=lineSum(root->right);
    int pathSum=root->val;
    if(left>0) pathSum+=left;
    if(right>0) pathSum+=right;
    mx=max(mx,pathSum);
    return root->val+max(0,max(left,right));
}
    int maxPathSum(TreeNode* root) {
        mx=INT_MIN;
        lineSum(root);
        return mx;
    }
};