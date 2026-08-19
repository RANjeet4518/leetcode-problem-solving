class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int count=0;
        int sum;
     
       for(int i=0;i<n;i++){
          sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            if(sum==goal){
                count++;
            }
            else if(sum>goal){
                break;
            }
        }
       }
       return count;

        
        
    }
};