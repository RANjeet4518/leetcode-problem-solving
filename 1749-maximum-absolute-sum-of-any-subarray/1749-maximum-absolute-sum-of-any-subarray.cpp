class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum=0;
        int minSum=0;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxSum=max(maxSum,sum);
            if(sum<0) sum=0;
        }
        sum=0;
        for(int i=0;i<nums.size();i++){
          sum+=nums[i];
          minSum=min(minSum,sum);
          if(sum>0) sum=0;
        }
        return max(maxSum,abs(minSum));
    }
};