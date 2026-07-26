class Solution {
public:
    int largestInteger(int n, int s) {
        
        
         int high=pow(10,n)-1;
         int low=pow(10,n-1);
    

        int nums1=-1;
        int mx=-1;
        int sum;
        if(n==1 && s==1){
            return 1;
        }
        if(s==0){
            return 0;
        }
        for(int i=low;i<=high;i++){
            sum=0;
            nums1=i;
            while(i>0){
                sum+=i%10;
                i/=10;
            }
            i=nums1;
            if(sum==s){
                mx=max(mx,nums1);
            }
        }
        return mx;

        
    }
};