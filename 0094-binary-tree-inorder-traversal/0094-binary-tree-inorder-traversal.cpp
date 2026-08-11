
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr=root;
        while(curr!=nullptr){
            if(curr->left!=nullptr){
                TreeNode* pred=curr->left;
                while(pred->right!=nullptr && pred->right!=curr){
                    pred=pred->right;
                }
                if(pred->right==nullptr){
                    pred->right=curr;
                    curr=curr->left;
                }
                 if(pred->right==curr){
                    pred->right=nullptr;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
            else{
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans;
        
    }
};