class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
    map<int,int> mp;
    int j=0;
    int mx=0;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        if(mp[nums[i]]<=k){
            mx=max(mx,i-j+1);
        }
        else{
            while(mp[nums[i]]>k){
                mp[nums[j]]--;
                  j++;
            }
        }
    }
    return mx;
        
    } 
};