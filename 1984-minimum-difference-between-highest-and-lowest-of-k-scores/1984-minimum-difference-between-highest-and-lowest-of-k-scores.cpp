class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mn=nums[k-1]-nums[0];
        int j=1;
        for(int i=k;i<nums.size();i++){
            int diff=nums[i]-nums[j];
            mn=min(mn,diff);
            j++;
        }
        return mn;
        
    }
};