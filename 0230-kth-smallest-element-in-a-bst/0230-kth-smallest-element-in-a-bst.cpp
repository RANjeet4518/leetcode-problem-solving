
class Solution {
public:
 void findKthSmallest( priority_queue<int>& pq,TreeNode* root,int k,int& ans){
       
       if(root==nullptr) return;
        
        pq.push(root->val);
        if(pq.size()>k) pq.pop();
         ans=pq.top();
        findKthSmallest(pq,root->left,k,ans);
        findKthSmallest(pq,root->right,k,ans);
        

 }
    int kthSmallest(TreeNode* root, int k) {
         priority_queue<int> pq;
         int ans=0;
      findKthSmallest(pq,root,k,ans);
      return ans;
     
        
    }
};