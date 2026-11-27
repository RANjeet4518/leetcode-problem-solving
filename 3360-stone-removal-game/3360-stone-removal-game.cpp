class Solution {
public:
    bool canAliceWin(int n) {
        int i;
        for( i=10;i>=0;i--){
            if(n>=i) n-=i;
            else break;
        }
        return i%2!=0? true:false;
    }
};