class Solution {
public:
long long findKDiffSub(vector<int>& nums,int k){
    long long ans=0;
    unordered_map<int,int> mp;
    int j=0;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        while(mp.size()>k){
            mp[nums[j]]--;
            if(mp[nums[j]]==0) mp.erase(nums[j]);
            j++;
        }
        ans+=i-j+1;
    }
    return ans;
} 
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return findKDiffSub(nums,k)-findKDiffSub(nums,k-1);
        
    }
};