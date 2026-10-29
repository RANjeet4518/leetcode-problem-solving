class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long,long long> mp;
        int j=0;
        int n=nums.size();
        long long mx=LLONG_MIN;
        vector<long long> prev(n);
        prev[0]=nums[0];
        for(int i=1;i<nums.size();i++){
        prev[i]=prev[i-1]+nums[i];
        } 
        
        for(int i=0;i<nums.size();i++){

            if(mp.find(nums[i]-k)!=mp.end()){
                long long temp=mp[nums[i]-k];
                mx=max(mx,(prev[i]-prev[temp]+nums[temp]));
            }
            
             if(mp.find(nums[i]+k)!=mp.end()){
                long long temp=mp[nums[i]+k];
                mx=max(mx,(prev[i]-prev[temp]+nums[temp]));
            }

            if(mp.find(nums[i])==mp.end() || prev[mp[nums[i]]]>prev[i]) mp[nums[i]]=i;
        } 
        return mx==LLONG_MIN ? 0 : mx ;
    }
};