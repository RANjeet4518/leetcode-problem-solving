class Solution {
public:
int findNoOfWay(vector<int>& nums,vector<vector<int>>& dp,int target,int i,int sum,int totalSum){
    if(i==nums.size()) return sum==target;
    if(dp[i][sum+totalSum]!=-1) return dp[i][sum+totalSum];
    int add=findNoOfWay(nums,dp,target,i+1,sum+nums[i],totalSum);
    int sub=findNoOfWay(nums,dp,target,i+1,sum-nums[i],totalSum);
    return dp[i][sum+totalSum]=add+sub;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalSum=0;
        for(auto &p:nums) totalSum+=p;
        vector<vector<int>> dp(nums.size(),vector<int>(2*totalSum+1,-1));
        return findNoOfWay(nums,dp,target,0,0,totalSum);
        
        
    }
};