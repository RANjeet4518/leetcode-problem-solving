class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
      int n=nums.size();
      vector<int> dp1(n);
      vector<int> dp2(n);

      for(int i=0;i<n;i++){
        int mx=0;
        for(int j=0;j<=i-1;j++){
            if(nums[i]>nums[j]){
                mx=max(mx,dp1[j]);
            
            }
        }
        dp1[i]=1+mx;
     
        cout<<dp1[i]<<" ";
      }
      cout<<"\n";
         for(int i=n-1;i>=0;i--){
            int mx=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                mx=max(mx,dp2[j]);
            }
        }
        dp2[i]=1+mx;
        cout<<dp2[i]<<" ";

      }
      int mx=0;
      for(int i=0;i<n;i++){
        if(dp1[i]>1 && dp2[i]>1)mx=max(mx,dp1[i]+dp2[i]-1);
      }
      return n-mx;
    }
};