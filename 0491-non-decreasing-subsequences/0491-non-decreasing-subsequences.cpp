class Solution {
public:
  void allSubsequence(vector<int>& nums,vector<vector<int>>& ans,vector<int>& temp,int ind,set<vector<int>>& st){
    if(temp.size()>=2){
        if(st.find(temp)==st.end()) ans.push_back(temp);
        st.insert(temp);
        
    }
    if(ind==nums.size()){
        return;
    }
    for(int i=ind;i<nums.size();i++){
        int n=temp.size();
      if(!temp.empty() && temp.back() > nums[i]) continue;
        temp.push_back(nums[i]);
        allSubsequence(nums,ans,temp,i+1,st);
        temp.pop_back();
    }

  }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>> st;
        allSubsequence(nums,ans,temp,0,st);
        return ans;


        
    }
};