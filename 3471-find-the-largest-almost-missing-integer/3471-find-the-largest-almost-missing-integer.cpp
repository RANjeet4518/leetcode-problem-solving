class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
     unordered_map<int,int> mp;
     for(int p:nums){
        mp[p]++;
     }
     int mx=-1;
        if(k==1){
            for(auto p:mp){
                if(p.second==1){
                    mx=max(mx,p.first);
                }

            }
            return mx;
        }
        else if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        else{
            int first=nums[0];
            int second=nums[n-1];
            if(first==second  || (mp[first]>1 && mp[second]>1)){
                return -1;
            }
             if(mp[first]>mp[second]){
                return second;
             }
             else if(mp[first]==mp[second]){
                return max(first,second);
             }
             else{
                return first;
             }
        }
        return -1;
        
    }
};