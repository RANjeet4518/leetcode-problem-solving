class Solution {
public:
int findNoOfway(vector<int>& nums,vector<int>& dp,int target){
    
    if(target==0)return 1;
    if(dp[target]!=-1)return dp[target];
    int ans=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>target)break;
      ans+=findNoOfway(nums,dp,target-nums[i]);
    }
    
    return dp[target]=ans;
}
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> dp(target+1,-1);
        sort(nums.begin(),nums.end());
       return findNoOfway(nums,dp,target);

    }
};