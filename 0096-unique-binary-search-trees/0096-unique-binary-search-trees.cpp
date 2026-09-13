class Solution {
public:
    int numTrees(int n) {
        if(n==1 || n==0) return 1;
        if(n==2) return 2;
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=numTrees(n-1-i)*numTrees(i);
        }
        return ans;

    }
};