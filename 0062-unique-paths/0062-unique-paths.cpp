class Solution {
public:
    int findAllUniquePath(int m,int n,int row,int col,vector<vector<int>>& dp){
        if(row==m && col==n){
             return 1;
         }
        if(dp[row][col]!=-1){ 
            return dp[row][col];
        }
        int down=0;
        int right=0;
        if(row<m){
            down=findAllUniquePath(m,n,row+1,col,dp);
        }
        if(col<n){
            right=findAllUniquePath(m,n,row,col+1,dp);
        }
        dp[row][col]=down+right;
        return dp[row][col];
        
    }
     int uniquePaths(int m, int n) {
    
      vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

      return findAllUniquePath(m,n,1,1,dp);

    }
};