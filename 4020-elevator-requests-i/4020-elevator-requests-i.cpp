class Solution {
public:
    int elevatorRequests(int n, vector<int>& nums) {
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            ans+=abs(nums[i]-nums[i-1]);
        }

         return ans;
    }
};