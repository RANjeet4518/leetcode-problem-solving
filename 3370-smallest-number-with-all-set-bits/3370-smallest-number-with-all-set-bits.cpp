class Solution {
public:
    int smallestNumber(int n) {
        int temp=1;
        while(true){
            temp*=2;
            if(temp>n){
                return temp-1;
            }
        }
        return -1;
        
    }
};