class Solution {
public:
int digitSum(int i){
    int sum=0;
    while(i){
        sum+=i%10;
        i/=10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int k=digitSum(nums[i]);
            if(k==i){
                ans=min(ans,i);
            }
        }
        return ans==INT_MAX ? -1: ans;
        
    }
};