class Solution {
public:
   bool findPartitionSubset(vector<int>& nums,vector<vector<int>>& dp,int i,int sum){
    if(i==nums.size() || sum<0) return false;

    if(sum==0) return dp[i][sum] =true;
    if(dp[i][sum]!=-1) return dp[i][sum];
    bool skip=findPartitionSubset(nums,dp,i+1,sum);
    bool take =false;
   if(nums[i]<=sum) take=findPartitionSubset(nums,dp,i+1,sum-nums[i]); 
    return dp[i][sum]=(take||skip);
   }
   bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto &p:nums){
            sum+=p;
        }
        if(sum%2!=0) return false;
        vector<vector<int>> dp(nums.size()+1,vector<int>(sum/2+1,-1));
        return findPartitionSubset(nums,dp,0,sum/2);

        
    }
};