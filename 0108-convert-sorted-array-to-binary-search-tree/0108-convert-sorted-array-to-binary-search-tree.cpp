
class Solution {
public: 
 TreeNode* buildBalanceTree(vector<int>& nums,int lo,int hi){
    if(lo>hi) return NULL;
    int mid=lo+(hi-lo)/2;
    TreeNode* root=new TreeNode(nums[mid]); 
    if(lo==hi) return root;
    root->left = buildBalanceTree(nums,lo,mid-1);
    root->right = buildBalanceTree(nums,mid+1,hi);
    return root;
 }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int n=nums.size();
        return buildBalanceTree(nums,0,n-1);
        
    }
};