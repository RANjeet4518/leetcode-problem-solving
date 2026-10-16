class Solution {
public:
    long long maxScore(vector<int>& nums, int x) {
        long long even=LLONG_MIN/2;;
        long long odd=LLONG_MIN/2;;
        if(nums[0]%2==0) even=nums[0];
        else odd=nums[0];
        for(int i=1;i<nums.size();i++){
            
            if(nums[i]%2==0){
                even=max(even+nums[i],odd+nums[i]-x);
            }
            else odd=max(odd+nums[i],even+nums[i]-x);
        }
        return max(even,odd);
        
    }
};