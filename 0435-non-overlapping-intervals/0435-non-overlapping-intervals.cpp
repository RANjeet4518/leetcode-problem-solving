class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            cout<<nums[i][0]<<" "<<nums[i][1]<<"   ";
        }
        int j=0;
        int st=nums[0][0];
        int end=nums[0][1];
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i][0]<end){
               if(end>nums[i][1]){
                st=nums[i][0];
                end=nums[i][1];
               }
               count++;
               continue;
            
            }
             st=nums[i][0];
             end=nums[i][1];

        }
        return count;
    }
};