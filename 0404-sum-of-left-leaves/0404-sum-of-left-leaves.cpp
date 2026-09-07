
class Solution {
public:
void sumofAllLeftLeaveNode(TreeNode* root,int& sum,bool x){
    if(root==nullptr) return;
    if( x==true && root->left==nullptr && root->right==nullptr ){
          sum+=root->val;
    }
    sumofAllLeftLeaveNode(root->left,sum,true);
    sumofAllLeftLeaveNode(root->right,sum,false);
}
    int sumOfLeftLeaves(TreeNode* root) {
        int  sum=0;
        
        sumofAllLeftLeaveNode(root,sum,false);
        return sum;
        
    }
};