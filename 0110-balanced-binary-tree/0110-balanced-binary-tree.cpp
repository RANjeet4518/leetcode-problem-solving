
class Solution {
public:
int lefthieght(TreeNode* root){
    if(root==nullptr) return 0;
     return 1+max(lefthieght(root->left),lefthieght(root->right));
}
int righthieght(TreeNode* root){
    if(root==nullptr) return 0;
     return 1+max(righthieght(root->left),righthieght(root->right));
}
    bool isBalanced(TreeNode* root) {
       if(root==nullptr) return true;
       else if((lefthieght(root->left)-righthieght(root->right)<-1 || lefthieght(root->left)-righthieght(root->right)>1)) return false;
       else return isBalanced(root->left) && isBalanced(root->right);
        
    }
};