class Solution {
public:
    int reverse(int x) {
        long int rev=0,remn;
        
        
        
        while(x!=0){
            remn=x%10;
            x/=10;
           
           
            if(rev>INT_MAX/10 || rev<INT_MIN/10){
                return 0;
            }
            rev=rev*10+remn;
            


        }
        
        return rev;


        
        
    }
};