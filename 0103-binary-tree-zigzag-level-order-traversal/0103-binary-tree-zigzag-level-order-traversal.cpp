
class Solution {
public:
int NoofLevel(TreeNode* root){
    if(root==nullptr){
        return 0;
    }
    return 1+ max(NoofLevel(root->left),NoofLevel(root->right));
}
void printZigzag(vector<int>& ans1,TreeNode* root,int st,int level){

    if(root==nullptr){
        return;
    }
    if(st==level){
        ans1.push_back(root->val);
        return;
    }
    if(level%2!=0){
            printZigzag(ans1,root->left,st+1,level);
            printZigzag(ans1,root->right,st+1,level);

    }
      if(level%2==0){
            printZigzag(ans1,root->right,st+1,level);
            printZigzag(ans1,root->left,st+1,level);

    }

}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        vector<int> ans1;

        int levels=NoofLevel(root);
        for(int i=1;i<=levels;i++){

            printZigzag(ans1,root,1,i);
            ans.push_back(ans1);
            
            ans1.clear();
        }
        return ans;
        
    }
};