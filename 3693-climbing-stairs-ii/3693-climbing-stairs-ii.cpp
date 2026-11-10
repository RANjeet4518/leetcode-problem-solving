class Solution {
public:
int findMinimum(vector<int>& nums,vector<int>& dp,int i,int n){
    if(i==n-1){
        return 0;
    }
   int x=INT_MAX;
   if(dp[i+1]!=-1) return dp[i+1];
    if(i+1<n) x=min(x,nums[i+1]+1+findMinimum(nums,dp,i+1,n));
    if(i+2<n) x=min(x,nums[i+2]+4+findMinimum(nums,dp,i+2,n));
    if(i+3<n) x=min(x,nums[i+3]+9+findMinimum(nums,dp,i+3,n));
      return dp[i+1]=x;
}
    int climbStairs(int n, vector<int>& nums) {
       
       vector<int> dp(n+4,-1);
        return  findMinimum(nums,dp,-1,n);
    }
};