class Solution {
public:
    int countSubstrings(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int count=0;
        for(int k=0;k<n;k++){
            int i=k,j=0;
            int temp=n-k;
            while(temp--){
                 if(i==j) dp[i][j]=1;
                 else if(j<n-1 && i>0 && s[i]==s[j]){
                    if(i-j<=2) dp[i][j]=1;
                  else dp[i][j]=(dp[i-1][j+1]==1);
                 }
                 else dp[i][j]=0;
                 if(dp[i][j]==1) count++;
                 i++;
                 j++;
              
            }
          
        }
        return count;
        
    }
};