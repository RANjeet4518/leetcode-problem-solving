class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        int minQuantity=0;
        int maxQuantity=0;
        int x=total/cost1;
        int y=total/cost2;
        minQuantity=min(x,y);
        maxQuantity=max(x,y);
        if(maxQuantity==0) return 1;
        if(minQuantity==0 || maxQuantity==0) return maxQuantity+1;

        int temp=total;
        long long sum=0;
        for(int i=0;i<=minQuantity;i++){
            temp=total;
            if(cost1>=cost2){
               temp-=cost1*i;
               sum+=temp/cost2;
               sum++;
            }
              else{
               temp-=cost2*i;
               sum+=temp/cost1;
               sum++;
            }
        }
        return sum;
        
    }
};