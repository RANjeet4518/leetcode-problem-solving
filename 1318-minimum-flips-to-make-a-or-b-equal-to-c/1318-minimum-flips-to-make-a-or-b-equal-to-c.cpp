class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;
        while(max(a,max(b,c))){
            int temp=a|b;
            if(temp%2!=c%2){
                if(a%2==1 && b%2==1){
                    count+=2;
                }
                else count++;
            }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return count;
        
    }
};