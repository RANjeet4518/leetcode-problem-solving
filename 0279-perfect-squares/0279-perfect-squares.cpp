class Solution {
public:
int findMinsum(int n,vector<int>& dp){
    if(n==0){
        return 0;
    }
    int ans=INT_MAX;
    if(dp[n]!=-1) return dp[n];
    for(int i=1;i*i<=n;i++){
        if(i*i>n) continue;
      ans=min(ans,1+findMinsum(n-i*i,dp));
    }

    return dp[n]=ans;
}
    int numSquares(int n) {
        vector<int> dp(n+1,-1);
       return findMinsum(n,dp);
        
    }
};