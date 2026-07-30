class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
      
        int count=1;
        int ans=0;
       
        while(n>0){
            if(n>=8){
                ans+=count*8;
            }
            else{
                ans+=count*n;
            }
            count++;
            n-=8;
        }
        return ans;


        
    }
};