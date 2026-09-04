class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
       int n=nums.size();
       int mx=nums[0];
        int mn=INT_MAX;
       for(int i=0;i<n;i++){
         mx=max(mx,nums[i]);
       
        for(int j=i;j<n;j++){
           mn=min(mn,nums[j]);

        }
        if((mx-mn)<=k){
          return i;
        }
        mn=INT_MAX;
       }
       return -1;
        
    }
};