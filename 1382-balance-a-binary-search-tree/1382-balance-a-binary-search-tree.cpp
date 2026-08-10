
class Solution {
public:
    void inorder(TreeNode* root,vector<int>& ans){
    if(root==nullptr) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
}
    TreeNode* BuildBalance(int lo,int hi,vector<int>& ans){
        if(lo>hi) return nullptr;
        int mid=lo+(hi-lo)/2;
        TreeNode* root=new TreeNode(ans[mid]);
        if(lo==hi) return root;
         root->left=BuildBalance(lo,mid-1,ans);
         root->right=BuildBalance(mid+1,hi,ans);
         return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);  
       return BuildBalance(0,ans.size()-1,ans);
    }
};