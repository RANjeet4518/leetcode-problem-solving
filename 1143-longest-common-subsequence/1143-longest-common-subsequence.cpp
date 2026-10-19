class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.size(),n=text2.size();
        vector<vector<int>> dp(text1.size()+1,vector<int>(text2.size()+1,0));
        for(int i=1;i<text1.size()+1;i++){
            for(int j=1;j<text2.size()+1;j++){
                int p=(i>0 && j>0) ? dp[i-1][j-1]:0;
                int q=(i>0) ? dp[i-1][j]:0;
                int r=(j>0) ? dp[i][j-1]:0;
          if(text1[i-1]==text2[j-1]){
            dp[i][j]=1+p;
          }
          else dp[i][j]=max(q,r);
            }
        }
        return dp[m][n];
        
    }
};