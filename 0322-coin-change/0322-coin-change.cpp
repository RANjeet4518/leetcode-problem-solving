class Solution {
public:
    int minCoins(vector<int>& coins, vector<vector<int>>& dp,int i,int k){
        if(k==0) return 0;
        if(i==coins.size()) return 1e9;
        if(dp[i][k]!=-1) return dp[i][k];
        int skip= minCoins(coins,dp,i+1,k);
        int take=1e9;
        if(k>=coins[i]) take=1+minCoins(coins,dp,i,k-coins[i]);
        
        return dp[i][k]=min(skip,take);

    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        sort(coins.begin(),coins.end());
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        int ans=minCoins(coins,dp,0,amount);
        return ans>=1e9 ? -1:ans;
    }
};