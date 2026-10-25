class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long sum=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=minK && nums[i]<=maxK){
                count++;
            }
            else{
                sum=sum+count*(count+1)/2;
                count=0;
            }
        }
        sum=sum+count*(count+1)/2;
        return sum;
    }
};