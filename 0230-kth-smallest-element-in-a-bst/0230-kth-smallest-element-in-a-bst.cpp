
class Solution {
public:
void inor(vector<int>& ans,TreeNode* root){
    if(root==nullptr) return;
        inor(ans,root->left);
        ans.push_back(root->val);
        inor(ans,root->right);

}
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        inor(ans,root);
        return ans[k-1];
        
    }
};