class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        for(int i=0;i<n;i++){
           int mx=0;
           for(int j=i-1;j>=0;j--){
            if(nums[i]>nums[j]){
               mx=max(mx,dp[j]);
            } 
           }
           dp[i]=1+mx;
           
        }
        int mx=*max_element(dp.begin(),dp.end());
        return mx;
    }
};