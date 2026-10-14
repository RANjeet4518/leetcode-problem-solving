class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];

        }
        long long sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i<n/2) sum-=nums[i];
            else sum+=nums[i];
        }
        return sum;
    }
};