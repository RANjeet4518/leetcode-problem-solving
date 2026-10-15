class Solution {
public:
long long findLgsttSub(vector<int>& nums,vector<vector<long long>>& dp,int target,int i){
    if(target==0) return 0;
    if(i==nums.size())return -3001;
    if(dp[i][target]!=-1) return dp[i][target];
    long long skip=findLgsttSub(nums,dp,target,i+1);
    long long take=-3001;
    if(nums[i]<=target) take=1+findLgsttSub(nums,dp,target-nums[i],i+1);
    return dp[i][target]=max(skip,take);

}
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
       vector<vector<long long>> dp(nums.size(),vector<long long>(target+1,-1));
       int ans= findLgsttSub(nums,dp,target,0);
       return -ans>=2000 ?-1:ans;
        
    }
};