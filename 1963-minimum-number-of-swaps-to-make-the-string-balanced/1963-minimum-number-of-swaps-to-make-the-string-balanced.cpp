class Solution {
public:
    int minSwaps(string s) {
        int n=s.size();
        
        stack<char> st;
        for(int i=0;i<n;i++){
            
            if(!st.empty() && st.top()=='[' &&  s[i]==']'){
                st.pop();
            }
            else st.push(s[i]);
            

        }
         n=st.size()/2;
        return n%2==0 ? n/2 :(n+1)/2;

        
    }
};