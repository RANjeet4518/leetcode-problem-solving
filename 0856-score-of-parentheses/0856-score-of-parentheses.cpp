class Solution {
public:
    int scoreOfParentheses(string s) {
        int op=0,ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') op++;
             else{
                 op--;
                   if(s[i-1]=='('){
                ans+=pow(2,op);
                          }
                }
        
        }
        return ans;
        
    }
};