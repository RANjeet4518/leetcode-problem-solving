class Solution {
public:
static const int mod = 1e9 + 7;
int findAllPath(vector<vector<int>>& nums,vector<vector<vector<int>>>& dp, int sr, int sc, int er, int ec, int dir){
    if(sr>er || sc>ec)return 0;
    if(sr==er && sc==ec) return 1;
    if(dp[sr][sc][dir]!=-1) return dp[sr][sc][dir];
  long long ans=0;
    if(nums[sr][sc]==0){
        ans+=findAllPath(nums,dp,sr,sc+1,er,ec,0);
        ans+=findAllPath(nums,dp,sr+1,sc,er,ec,1);
    }
    else{
        if(dir==0) ans+=findAllPath(nums,dp,sr+1,sc,er,ec,1);
        if(dir==1) ans+=findAllPath(nums,dp,sr,sc+1,er,ec,0);

    }
    return dp[sr][sc][dir]=ans%mod;
     }
    int uniquePaths(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
      
        vector<vector<vector<int>>> dp( n, vector<vector<int>>(m, vector<int>(2,-1)));
        return (findAllPath(nums, dp, 0, 0, n-1, m-1, 0))%mod;
        
    }
};