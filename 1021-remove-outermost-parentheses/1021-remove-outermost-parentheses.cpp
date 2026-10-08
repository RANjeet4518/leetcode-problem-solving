class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        int n=s.size();
        string s2;
        
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push('(');
                if(st.size()>1) s2+='(';

            }
            if(s[i]==')'){
                if(st.size()>1) s2+=')';
                st.pop();
                
            }
        }
        return s2;

        
    }
};