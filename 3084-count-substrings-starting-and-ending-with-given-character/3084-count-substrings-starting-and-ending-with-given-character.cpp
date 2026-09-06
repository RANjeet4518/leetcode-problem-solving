class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long m=0;
        for(auto &p:s){
            if(p==c)m++;
        }
        return m*(m+1)/2;
    }
};