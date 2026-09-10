
class Solution {
public:
    pair<int,int> findAllnodes(TreeNode* root, int& count) {

             if(root == nullptr) return {0, 0};

        pair<int,int> left = findAllnodes(root->left, count);
        pair<int,int> right = findAllnodes(root->right, count);

        int sum = left.first + right.first + root->val;
        int nodes = left.second + right.second + 1;
        int average = sum / nodes;

           if(average == root->val)
              count++;

        return {sum, nodes};
    }
    int averageOfSubtree(TreeNode* root) {
      
         int count=0;
         findAllnodes(root, count);
         return count;
        
    }
};