
class Solution {
public:
void PrintAllPathSum(TreeNode* root,int targetSum,vector<int> ans1,vector<vector<int>>& ans,int sum){
    if(root==nullptr) return;
    if(root->left==nullptr && root->right==nullptr){
        ans1.push_back(root->val);
        sum+=root->val;
        if(sum==targetSum){
            ans.push_back(ans1);
        }
        return;

    }
    ans1.push_back(root->val);
        
        PrintAllPathSum(root->left,targetSum,ans1,ans,sum+root->val);
        PrintAllPathSum(root->right,targetSum,ans1,ans,sum+root->val);

}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> ans1;
        vector<vector<int>> ans;
        PrintAllPathSum(root,targetSum,ans1,ans,0);
        return ans;

        
    }
};