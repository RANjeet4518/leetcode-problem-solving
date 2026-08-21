class Solution {
public:

 void allpermutation(vector<int> ans,vector<vector<int>>& ans1,vector<int>& nums,vector<bool>& used ,  set<vector<int>>& st){
     if(ans.size()==nums.size() && st.find(ans)==st.end()){
        st.insert(ans);
        ans1.push_back(ans);
        return;
    }
  
   
    for(int i=0;i<nums.size();i++){
        if(used[i]) continue;
        ans.push_back(nums[i]);
        used[i]=true;

        allpermutation(ans,ans1,nums,used,st);
        used[i]=false;
        ans.pop_back();
    }
 }


    vector<vector<int>> permuteUnique(vector<int>& nums) {
               vector<int> ans;
        vector<vector<int>> ans1;
        vector<bool> used(nums.size(),false);
        set<vector<int>> st;
    allpermutation(ans,ans1,nums,used,st);
        return ans1;
        
    }
};