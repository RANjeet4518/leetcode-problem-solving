class Solution {
public:
    bool isPalindromic(string s) {
        string st="";

        for(int i=0;i<s.size();i++){
            int as=s[i];
            while(as){
                if(as%2==0)st+='0';
                else st+='1';
                as>>=1;
            }
            st+='0';
        }
       int i=0;
       int j=st.size()-1;
       cout<<st;
       while(i<=j){
        if(st[i]!=st[j]){
            return false;
          
        }
          i++;
            j--;
       }
       return true;
        
    }
};