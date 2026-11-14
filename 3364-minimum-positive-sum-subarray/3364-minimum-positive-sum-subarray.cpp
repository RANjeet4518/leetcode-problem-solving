class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int sum,mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            sum=0;
         for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            if(sum>0 & j-i+1>=l && j-i+1<=r){
                mn=min(mn,sum);
            }
         }
        }
        return mn==INT_MAX? -1:mn;
    }
};