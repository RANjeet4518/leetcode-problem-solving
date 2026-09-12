class Solution {
public:
void findMinimum(int n,int count,int& mn){
    // if(count==32) return;

    if(n==1){
        mn=min(count,mn);
        return;
    }
    
    if(!(n & 1)){
        findMinimum(n/2,count+1,mn);
    }
    else{
        findMinimum(n-1,count+1,mn);
        findMinimum(n+1,count+1,mn);
    }
}
    int integerReplacement(int n) {
        int mn=INT_MAX;
        if(n==mn) return 32;
        findMinimum(n,0,mn);
        return mn;
    }
};