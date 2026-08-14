
class Solution {
public:
    TreeNode* BuildTree(vector<int>& in,vector<int>& pre,int prelo,int prehi,int inlo,int inhi){
   
    if(prelo>prehi) return NULL;
   
    TreeNode* root=new TreeNode(pre[prelo]);
    if(prelo==prehi) return root;
    int i=inlo;
    while(i<=inhi){
        if(in[i]==pre[prelo]) break;
        i++;
    }
    int leftcount=i-inlo;

   
    
    root->left=BuildTree(in,pre,prelo+1,prelo+leftcount,inlo,i-1);
    root->right=BuildTree(in,pre,prelo+leftcount+1,prehi,i+1,inhi);
           return root;


    }
    TreeNode* bstFromPreorder(vector<int>& pre) {
        vector<int> in=pre;
        sort(in.begin(),in.end());
        int n=pre.size();

        return BuildTree(in,pre,0,n-1,0,n-1);
        
    }
};