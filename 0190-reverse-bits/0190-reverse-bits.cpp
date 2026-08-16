class Solution {
public:
    int reverseBits(int n) {
       int temp=pow(2,30);
       int ans=0;

    for(int i=0;i<32;i++){
        
        if(n%2!=0){
            int multi=pow(2,31-i);
      ans+=multi;
        }
        n=n>>1;
    }
    return ans;
        
    }
};