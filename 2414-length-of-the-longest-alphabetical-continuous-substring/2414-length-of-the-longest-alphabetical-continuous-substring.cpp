class Solution {
public:
    int longestContinuousSubstring(string s) {
        int mx=1;
        int ans=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]+1){
              ans++;
            }
            else{
                ans=1;
            }
            mx=max(mx,ans);
        }
        return mx;
    }
};