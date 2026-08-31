/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void findsumroot(TreeNode* root,string s,int& sum){
 if(root==nullptr) return;
   string ch=to_string(root->val);
    if(root->left==nullptr && root->right==nullptr){
        s+=ch;
         int k=0;
         if(s.size()!=0) k=stoi(s);
         sum+=k;
         return;
    }
    
    findsumroot(root->left,s+ch,sum);
    findsumroot(root->right,s+ch,sum);

}
    int sumNumbers(TreeNode* root) {
        int sum=0;
        string s;
    findsumroot(root,s,sum);
    return sum;
        
    }
};