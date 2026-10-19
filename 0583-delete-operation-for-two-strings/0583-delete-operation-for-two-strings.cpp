class Solution {
public:
int MinDel(string& s1,string& s2,int i,int j,vector<vector<int>>& dp){
    if(i==-1)return j+1;
    if(j==-1)return i+1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j]) return dp[i][j]=MinDel(s1,s2,i-1,j-1,dp);
    else{
        int delS1=1+MinDel(s1,s2,i,j-1,dp);
        int delS2=1+MinDel(s1,s2,i-1,j,dp);
        return dp[i][j]=min(delS1,delS2);
    }
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return MinDel(word1,word2,n,m,dp);
    }
};