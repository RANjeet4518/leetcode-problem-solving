class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count=0, count1=0;
        for(auto &p:s){
            if(p==c){ count=count+1+count1;count1++; }
        }
        return count;
    }
};