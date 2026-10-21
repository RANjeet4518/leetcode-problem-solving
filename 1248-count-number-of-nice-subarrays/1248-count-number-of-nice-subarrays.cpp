class Solution {
public:
long long findNoofSub(vector<int>& nums,int k){
    unordered_map<int,int> mp;
    long long ans=0,j=0,len=0;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        if(nums[i] & 1) len++;
        while(len>k){
            mp[nums[j]]--;
            if(nums[j] & 1) len--;
            if(mp[nums[j]]==0) mp.erase(nums[j]);
            j++;
        }
        ans+=i-j+1;
    }
    return ans;
 }
    int numberOfSubarrays(vector<int>& nums, int k) {
    return findNoofSub(nums,k)-findNoofSub(nums,k-1);
        
    }
};
