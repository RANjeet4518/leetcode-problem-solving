class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int mx=0;
        for(int i=n-1;i>=0;i--){
            mp[nums[i]]++;
            if(mp.find((nums[i]-1))!=mp.end()){
                mx=max(mx,mp[nums[i]]+mp[nums[i]-1]);
            }
             if(mp.find((nums[i]+1))!=mp.end()){
                mx=max(mx,mp[nums[i]]+mp[nums[i]+1]);
            }
        

        }
        return mx;
    }
};