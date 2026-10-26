class Solution {
public:
    int minimumCardPickup(vector<int>& nums) {
    
      int n=nums.size();
      int j=0;
      unordered_map<int,int> mp;
      int mn=INT_MAX;
      for(int i=0;i<n;i++){
        mp[nums[i]]++;
        while(mp[nums[i]]>1){
        mn=min(mn,i-j+1);
            mp[nums[j]]--;
            j++;
        }
        
      }
      return mn==INT_MAX ? -1:mn;
    }
};