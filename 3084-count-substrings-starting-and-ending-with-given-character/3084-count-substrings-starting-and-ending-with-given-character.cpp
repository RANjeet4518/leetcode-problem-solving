class Solution {
public:
    long long countSubstrings(string s, char c) {
        int n=s.size();
        long long count=0;
        long long count1=0;
        for(auto &p:s){
            if(p==c){
                count=count+1+count1;
                count1++;
            }
        }
        return count;
        
    }
};