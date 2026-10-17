class Solution {
public:
int TotalCombination(vector<int>& nums,vector<vector<int>>& dp,int i,int amount){
    if(i==nums.size())return 0;
    if(amount==0) return 1;
    if(dp[i][amount]!=-1) return dp[i][amount];
    int skip=TotalCombination(nums,dp,i+1,amount);
    int take=0;
    if(amount>=nums[i]) take=TotalCombination(nums,dp,i,amount-nums[i]);
    return dp[i][amount]=skip+take;
}
    int change(int amount, vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(amount+1,-1));
        return TotalCombination(nums,dp,0,amount);
        
    }
};