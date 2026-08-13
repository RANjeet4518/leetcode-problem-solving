
class Solution {
public:
void inor(set<int>& st,TreeNode* root){
    if(root==nullptr) return;
    inor(st,root->left);
    st.insert(root->val);
    inor(st,root->right);
    
}
    bool findTarget(TreeNode* root, int k) {
        set<int> st;
        inor(st,root);
        while(st.size()>0){
            int n=*st.begin();
            st.erase(st.begin());
            if(st.find(k-n)!=st.end()){
                return true;
            }
           
       
            if(st.size()==0) return false;
        }
        return false;
        
    }
};