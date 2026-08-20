class Solution {
public:
 void allpermutation(vector<int> ans,vector<vector<int>>& ans1,vector<int>& nums,vector<bool>& used){
     if(ans.size()==nums.size()){
        ans1.push_back(ans);
        return;
    }
  
   
    for(int i=0;i<nums.size();i++){
        if(used[i]) continue;
        ans.push_back(nums[i]);
        used[i]=true;

        allpermutation(ans,ans1,nums,used);
        used[i]=false;
        ans.pop_back();
    }
 }
 vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> ans1;
        vector<bool> used(nums.size(),false);
    allpermutation(ans,ans1,nums,used);
        return ans1;
        
    }
};