class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

       vector<vector<int>> dp(m,vector<int>(n,-1));
       dp[0][0]=grid[0][0];
       for(int j=0;j<n-1;j++){
          dp[0][j+1]=dp[0][j]+grid[0][j+1];
       }
        for(int i=0;i<m-1;i++){
          dp[i+1][0]=dp[i][0]+grid[i+1][0];
       }
       for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=min(grid[i][j]+dp[i-1][j],grid[i][j]+dp[i][j-1]);
        }
       }
       return dp[m-1][n-1];
     
    
        
    }
};