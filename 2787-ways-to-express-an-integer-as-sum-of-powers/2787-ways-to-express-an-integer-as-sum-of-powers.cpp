class Solution {
public:
int findnoOfway(int n,int i,int x, vector<vector<int>>& dp,int sum){
    if(sum>n)return 0;
    if(sum==n) return 1;
    if(i>n) return 0;
   
    if(dp[i][sum]!=-1) return dp[i][sum];
    int skip=findnoOfway(n,i+1,x,dp,sum);
   
    long long p=(long long)pow(i,x);
    p=p%1000000007;
   int take=0;
    if(p+sum<=n) take=findnoOfway(n,i+1,x,dp,sum+p);
    return dp[i][sum]=(skip+take)% 1000000007;
}
    int numberOfWays(int n, int x) {
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        return findnoOfway(n,1,x,dp,0);
    }
};