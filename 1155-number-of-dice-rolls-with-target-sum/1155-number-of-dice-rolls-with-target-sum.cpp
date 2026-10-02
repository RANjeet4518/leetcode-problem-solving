class Solution {
public:
#define mod 1000000007
#define ll long long
 ll findWays(vector<vector<ll>>& dp,int n,int k,int target){
    if(target==0 && n==0) return 1;
    if(n==0)return 0;
    ll sum=0;
    if(dp[n][target]!=-1) return dp[n][target];
    for(int i=1;i<=k;i++){
        if(target-i<0) continue;
       sum=(sum%mod+findWays(dp,n-1,k,target-i));
    }
    return dp[n][target]=sum%mod;
 }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<ll>> dp(35,vector<ll>(1002,-1));
        return findWays(dp,n,k,target);
    }
};