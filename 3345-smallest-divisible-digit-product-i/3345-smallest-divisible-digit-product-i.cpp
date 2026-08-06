class Solution {
public:
int ProductOfDigit(int n){
    int prod=1;
    int dig=0;
    while(n>0){
        dig=n%10;
        prod*=dig;
        n/=10;
    }
    return prod;
}
    int smallestNumber(int n, int t) {
        while(true){
            int x=ProductOfDigit(n);
            if(x%t==0){
                return n;
            }
            n++;
        }
        return -1;
        
    }
};