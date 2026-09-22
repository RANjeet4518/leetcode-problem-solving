class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=0;
        int st=nums[0][0];
        int end=nums[0][1];
        vector<vector<int>> ans;
        for(int i=1;i<nums.size();i++){
        if(end>=nums[i][0]){
              end=max(nums[i][1],end);
              if(i==n-1){
                ans.push_back({st,end});
              }
        }
        else{
            ans.push_back({st,end});
            st=nums[i][0];
              end=max(nums[i][1],end);
            if(i==n-1){
                ans.push_back({st,end});
            }
        }

        }
        if(n==1) return nums;
    
        return ans;

    }
};