class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
      set<vector<int>> st;
      for(int i=0;i<nums.size();i++){
        vector<int> temp;
        int div=0;
        for(int j=i;j<nums.size();j++){
            temp.push_back(nums[j]);
            if(nums[j]%p==0) div++;
            if(div>k) break;
            st.insert(temp);
        }

      }
      return st.size();
    }
};