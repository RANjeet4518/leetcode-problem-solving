
class Solution {
public:
TreeNode* BuildTree(vector<int>& in,int inlo,int inhi,vector<int>& post,int postlo,int posthi){
    if(postlo>posthi){
        return NULL;
    }
    TreeNode* root=new TreeNode(post[posthi]);
    if(postlo==posthi){
        return root;
    }
    int i=0;
    while(i<=inhi){
        if(in[i]==post[posthi]) break;
        i++;
    }
    int countright=inhi-i;
    root->right=BuildTree(in,i+1,inhi,post,posthi-countright,posthi-1);
    root->left=BuildTree(in,inlo,i-1,post,postlo,posthi-countright-1);
    return root;
}
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n=in.size();
        return BuildTree(in,0,n-1,post,0,n-1);
        
    }
};