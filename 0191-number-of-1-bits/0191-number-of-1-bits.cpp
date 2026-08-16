class Solution {
public:
    int hammingWeight(int n) {
        int setBits=0;
        while(n){
            if(n%2!=0){
                setBits++;
            }
            n=n>>1;
        }
        return setBits;

        
    }
};