class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.size();
      int op=0;
      int end=0;
      for(int i=0;i<n;i++){
        if(s[i]=='(') op++;
        else{ 
            if(op==0){
                end++;
            }
            else op--;
        }
      }
      return abs(op)+end;
        
    }
};