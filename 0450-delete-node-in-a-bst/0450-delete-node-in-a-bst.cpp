
class Solution {
public:
TreeNode* iop(TreeNode* root){
   if(root->left==nullptr) return nullptr;
    TreeNode* pred=root->left;
    while(pred->right){
        pred=pred->right;
    }
    return pred;

}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr) return nullptr;
        if(root->val==key){
        if(root->left==nullptr && root->right==nullptr){
            return NULL;
        }
        else if(root->left==nullptr || root->right==nullptr){
            if(root->left!=nullptr){
                return root->left;

            }
            else return root->right;
        }
        else{
            TreeNode* pred=iop(root);
            root->val=pred->val;
            root->left=deleteNode(root->left,pred->val);
           
        }
        }
        else if(root->val>key){
            root->left=deleteNode(root->left,key);

        } 
           else{ 
            root->right=deleteNode(root->right,key);
               }
            return root;      
    }
};