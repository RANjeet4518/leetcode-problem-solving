class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0;
         int mx=0;
    for(int i=0;i<k;i++){
      if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
        ans++;
      }
    }
    int j=0;
    mx=ans;
    for(int i=k;i<s.size();i++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' ){
             ans--;
      }
      
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
           ans++;
      }
      mx=max(mx,ans);
      j++;
    }
    return mx;
        
    }
};