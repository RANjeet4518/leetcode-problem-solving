class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto &p:arr){
            mp[p]++;

        }
        int mx=-1;
        for(auto p:mp){
            if(p.first==p.second) mx=max(mx,p.first);
        }
        return mx;
    }
};