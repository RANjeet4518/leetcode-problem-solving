class Solution {
public:
int max_rob(vector<int>& nums,vector<int>& dp,int n,int i){
    if(i>=n) return 0;
    // if(i==n-1 && dp[i]==INT_MAX) return 0;
    if(dp[i]!=-1) return dp[i];
    return dp[i]=max(nums[i]+max_rob(nums,dp,n,i+2),max_rob(nums,dp,n,i+1));
}
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        int n=nums.size();
        // dp[n]=INT_MAX;
        if(nums.size()==1)return nums[0];
        int k=max_rob(nums,dp,n,1);
        dp.clear();
        vector<int> dp1(nums.size()+1,-1);

        int k2=max_rob(nums,dp1,n-1,0);
        return max(k,k2);
    }
};