class Solution {
public:
int lps(string& s,string& rs,vector<vector<int>>& dp,int i,int j){
if(i==-1 || j==-1) return 0;
if(dp[i][j]!=-1) return dp[i][j];
if(s[i]==rs[j]) return dp[i][j]=1+lps(s,rs,dp,i-1,j-1);
else return dp[i][j]=max(lps(s,rs,dp,i-1,j),lps(s,rs,dp,i,j-1));
}
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        string rs=s;
        reverse(rs.begin(),rs.end());
        vector<vector<int>> dp(s.size(),vector<int>(s.size(),-1));
        return lps(s,rs,dp,n-1,n-1);
        
    }
};