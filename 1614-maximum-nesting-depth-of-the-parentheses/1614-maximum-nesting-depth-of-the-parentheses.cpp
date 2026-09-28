class Solution {
public:
    int maxDepth(string s) {
        int k=s.size();
    stack<char> st;
    int mn=0;
    for(auto &p:s){
        if(p=='('){
            st.push('(');
            int n=st.size();
            mn=max(mn,n);
        }
        else if(p==')') st.pop();
        
    }
    return mn;
    }
};