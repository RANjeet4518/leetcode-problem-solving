
class Solution {
public:
 long long  minBST(TreeNode* root){
    if(root==NULL) return LLONG_MAX;
    return min((long long)root->val,min(minBST(root->left),minBST(root->right)));
 }
  long long   maxBST(TreeNode* root){
    if(root==NULL) return LLONG_MIN;
    return max((long long)root->val,max(maxBST(root->left),maxBST(root->right)));
 }
    bool isValidBST(TreeNode* root) {
        if(root==nullptr) return true;
        if((root->val <= maxBST(root->left)) || (root->val >= minBST(root->right))){
            return false;
        }
        return isValidBST(root->left) && isValidBST(root->right);

        
    }
};