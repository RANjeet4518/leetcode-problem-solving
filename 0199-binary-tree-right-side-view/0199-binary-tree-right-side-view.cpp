
class Solution {
public:
// int printlevel(TreeNode* root){
//     if(root==nullptr){
//         return 0;
//     }
//     return 1+max(printlevel(root->left),printlevel(root->right));
// }
void  PrintAllNodesFromRightSide(TreeNode* root,vector<int>& ans,int level){
    if(root==nullptr){
        return;
    }
    if(ans.size()==level){
     ans.push_back(root->val);
    }
     PrintAllNodesFromRightSide(root->right,ans,level+1);
     PrintAllNodesFromRightSide(root->left,ans,level+1);

}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
     PrintAllNodesFromRightSide(root,ans,0);
     return ans;
        
    }
};