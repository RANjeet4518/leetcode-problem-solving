class Solution {
public:
    bool checkDivisibility(int n) {
        int prod=1;
        int sum=0;
        int temp=n;
       
        while(n>0){
            int dig=n%10;
                sum+=dig;
             prod*=dig;
              n/=10;
        }
        sum+=prod;
        if(temp%sum==0){
            return true;
        }
        else return false;
        
    }
};