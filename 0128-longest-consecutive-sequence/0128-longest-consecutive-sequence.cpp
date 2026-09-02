class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
        unordered_set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        nums.clear();
        for(auto &p:st) nums.push_back(p);
    
        int mx=0;
            for(int i=0;i<nums.size();i++){
               
                 if(st.contains(nums[i]-1)){
                        continue;
                 }
                 int j=0;
              while(st.contains(nums[i]+j)){
                  j++;
            }
             mx=max(mx,j);
         
        }
        return mx;
        

    }
};