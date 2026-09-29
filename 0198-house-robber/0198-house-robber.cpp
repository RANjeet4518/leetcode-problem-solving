class Solution {
public:
int findCost(vector<int>& nums,vector<int>& dp,int n){
    if(n<0) return 0;
    if(n==1 || n==0){
    return nums[n];
}

     if(dp[n]!=-1) return dp[n];
    return dp[n]=nums[n]+max(findCost(nums,dp,n-2),findCost(nums,dp,n-3));
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        return max(findCost(nums,dp,n-1),findCost(nums,dp,n-2));
    }
};