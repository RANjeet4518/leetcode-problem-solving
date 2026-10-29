class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<long long,long long> mp;
        mp[0]++;
   

    int mx=0;
    long long sum=0;
    for(int i=0;i<nums.size();i++){
      sum+=nums[i];
      int check=sum-k;
      if(mp.find(check)!=mp.end()) mx+=mp[check];
      mp[sum]++;
      
    
    }
    return mx;
    }
};