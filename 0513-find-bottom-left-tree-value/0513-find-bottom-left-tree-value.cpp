
class Solution {
public:
int findnoOflevel(TreeNode* root){
    if(root==nullptr) return 0;
    return 1+ max(findnoOflevel(root->left),findnoOflevel(root->right));
}
void findleftMostnode(TreeNode* root,int st,int level,int& ans){
    if(root==nullptr) return;
    if( st==level){
        ans=root->val;

    }
            findleftMostnode(root->right,st+1,level,ans);
            findleftMostnode(root->left,st+1,level,ans);

    
}
    int findBottomLeftValue(TreeNode* root) {
        int n=findnoOflevel(root);
        // if(root==nullptr) return 0;
        int ans=root->val;
       
            findleftMostnode(root,1,n,ans);
      
          return ans;
    }
};