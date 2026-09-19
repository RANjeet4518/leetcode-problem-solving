class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        for(auto p:answers){
            mp[p]++;
        }
        int ans=0;
        for(auto &p:mp){
            if(p.first==0){
                ans+=p.second;
                continue;
                
            }
            while(true){
                ans+=p.first+1;
                mp[p.first]=p.second-p.first-1;
                if(mp[p.first]<=0) break;
            }
        }
        return ans;
    }
};