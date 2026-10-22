class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        int m=a.size();
        int n=b.size();
        vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,0));
        for(int i=1;i<=a.size();i++){
            for(int j=1;j<=b.size();j++){
                if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        cout<<dp[m][n];
        int i=a.size(),j=b.size();
        string s;
        while(i>0 && j>0){
            if(a[i-1]==b[j-1]){
                 s+=a[i-1];
                 i--;
                 j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]) i--;
            else j--;
        }
        reverse(s.begin(),s.end());
        string ans;
        i=0,j=0;
        int k=0;
        while(i<m || j<n){
            while(i<m && a[i]!=s[k]){
                ans+=a[i];
                i++;
            }
            while(j<n && b[j]!=s[k]){
                ans+=b[j];
                j++;
            }
            if(k<s.size())ans+=s[k];
            k++;
            i++;
            j++;
        }
        return ans;
    }
};