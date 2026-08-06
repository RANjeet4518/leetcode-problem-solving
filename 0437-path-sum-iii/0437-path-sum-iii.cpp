
class Solution {
public:
void CountAllPath(TreeNode* root,long long sum,int& count){
    if(root==nullptr) return;
    if((long long)(root->val)==sum) count++;
    CountAllPath(root->left,sum-(long long)root->val,count);
    CountAllPath(root->right,sum-(long long)root->val,count);

}
    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return 0;
        int count =0;
        CountAllPath(root,targetSum,count);
        count+=pathSum(root->left,(long long)targetSum) + pathSum(root->right,(long long)targetSum);
        return count;
        
    }
};