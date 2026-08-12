class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxheap;

        int n=matrix[0].size();
        int count=0;

        for(int i=0;i<matrix[0].size();i++){
            for(int j=0;j<matrix[0].size();j++){

                maxheap.push(matrix[i][j]);
                // count++;

                if(maxheap.size()>k){
                    // count--;
                    maxheap.pop();
                }
            }
        }
          return maxheap.top();
        
    }
};