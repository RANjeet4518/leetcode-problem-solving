class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=n/3;
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto &p:nums){
           mp[p]++;

        }
        for(auto &p:mp){
            if(p.second>k){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};