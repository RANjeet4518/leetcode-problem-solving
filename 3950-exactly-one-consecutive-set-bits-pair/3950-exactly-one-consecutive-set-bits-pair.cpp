class Solution {
public:
    bool consecutiveSetBits(int n) {
        int count=0;
        while(n){
            int a=n%2;
            n>>=1;
            int b=n%2;
            if(a+b==2) count++;
            if(count==2) return false;
        }
        if(count==0) return false;
        return true;
        
    }
};