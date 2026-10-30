class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int j=0;
        unordered_map<int,int> mp;
        long long sum=0,maxSum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[nums[i]]++;
        while(mp[nums[i]]==2 || i-j+1>k){
            mp[nums[j]]--;
            sum-=nums[j];

            if(mp[nums[j]]==0) mp.erase(nums[j]);
            j++;
        }
        if(i-j+1==k) maxSum=max(maxSum,sum);

        }
        return maxSum;
        
    }
};