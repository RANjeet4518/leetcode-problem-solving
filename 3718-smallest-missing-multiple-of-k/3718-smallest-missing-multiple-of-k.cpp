class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st;
        for(auto p:nums){
            st.insert(p);
        }  
       int p=k;
       while(true){
           if(st.find(p)==st.end()){
            return p;
           }
           p+=k;
        }
        return -1;
    }
};