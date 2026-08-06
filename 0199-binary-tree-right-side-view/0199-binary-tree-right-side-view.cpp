
class Solution {
public:
void  PrintAllNodesFromRightSide(TreeNode* root,vector<int>& ans,int curr,int level,int& count){
    if(root==nullptr){
        return;
    }
    if(count==0 && curr==level){
        ans.push_back(root->val);
        count++;
    }
    if(count==0)  PrintAllNodesFromRightSide(root->right,ans,curr+1,level,count);
    if(count==0)  PrintAllNodesFromRightSide(root->left,ans,curr+1,level,count);

}
int NoOfLevel(TreeNode* root){
    if(root==nullptr){
        return 0;
    }
    return 1+max(NoOfLevel(root->left),NoOfLevel(root->right));
}
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int n=NoOfLevel(root);
        int count;
         for(int i=1;i<=n;i++){
            count=0;
             PrintAllNodesFromRightSide(root,ans,1,i,count);
         }
        return ans;
        
    }
};