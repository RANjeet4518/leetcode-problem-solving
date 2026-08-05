class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn=nums[0];
        int mx=nums[0];
        for(int i=0;i<nums.size();i++){
            if(mn>nums[i]){
                mn=nums[i];
            }
            if(mx<nums[i]){
                mx=nums[i];
            }
        }
        set<int> st;
        for(auto &p:nums){
            st.insert(p);
        }
        vector<int> ans;
        for(int i=mn;i<=mx;i++){
            if(st.find(i)==st.end()){
                ans.push_back(i);
            }
        }
        return ans;        
    }
};