class Solution {
public:
int lcs(string& s1,string& s2,int i,int j,vector<vector<int>>& dp){
    if(i==-1 || j==-1)return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int take=0;
    if(s1[i]==s2[j]) take=1+lcs(s1,s2,i-1,j-1,dp);
 
    else{
        take=max(lcs(s1,s2,i-1,j,dp), lcs(s1,s2,i,j-1,dp));
       
    }
    return dp[i][j]=take;
}
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size(),vector<int>(text2.size(),-1));
       return lcs(text1,text2,text1.size()-1,text2.size()-1,dp);
    }
};