class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int temp;
        int count1=0;
        for(int i=left;i<=right;i++){
            int count=0;
            temp=i;
            while(temp){
             if(temp & 1) count++;

              temp>>=1;

            }
           bool check=true;
           if(count==2){
             count1++;
             continue;
           }
           else if(count<2) continue;
           for(int j=2;j*j<=count;j++){
            if(count%j==0) check=false;
           }
           if(check==true) count1++;

        }
        return count1;
        
    }
};