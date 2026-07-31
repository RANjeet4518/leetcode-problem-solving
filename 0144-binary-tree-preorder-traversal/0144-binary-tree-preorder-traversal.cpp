
class Solution {
public:

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        if(root==nullptr){
            return {};
        }
        st.push(root);
        while( st.size()!=0){
            TreeNode* temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            if(temp->right!=nullptr) st.push(temp->right);
            if(temp->left!=nullptr) st.push(temp->left); 

        }
        return ans;
    }
};
