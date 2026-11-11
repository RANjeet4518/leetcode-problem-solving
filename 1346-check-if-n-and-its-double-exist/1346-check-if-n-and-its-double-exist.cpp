class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<double> st;
        for(auto p:arr){
            double k=(double)p;
         if(st.find(k*2)!=st.end() || st.find(k/2)!=st.end()) return true;
         else st.insert(k);
        }
        return false;
    }
};