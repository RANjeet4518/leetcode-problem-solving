class Solution {
public:
int findAllPath(vector<vector<int>>& nums,vector<vector<int>>& dp,int sr,int sc,int er,int ec){
    
    if(sr==er && sc==ec && nums[sr][sc]!=1) return 1;
    if(sr>er || sc>ec)return 0;
    int right=0;
    int down=0;
    if(dp[sr][sc]!=-1) return dp[sr][sc];
    if(sr+1<=er && nums[sr+1][sc]!=1){
        right=findAllPath(nums,dp,sr+1,sc,er,ec);
    }
     if(sc+1<=ec && nums[sr][sc+1]!=1){
        down=findAllPath(nums,dp,sr,sc+1,er,ec);
    }
    dp[sr][sc]=right+down;
    return dp[sr][sc];
}
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
       
        int n=nums.size();
        int m=nums[0].size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        // int i,j,count=0;
        // for(i=0;i<nums.size();i++){
        //    for( j=0;j<nums[0].size();j++){
        //     if(nums[i][j]!=1){
        //         count=1;
        //         break;
        //     }
        //    }
        //    if(count==1) break;
        // }
        if(nums[0][0]==1) return 0;
        return findAllPath(nums,dp,0,0,n-1,m-1);
    }
};