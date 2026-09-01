class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;
        while(n){
            mp[n%10]++;
            n/=10;
        }
        int ans=0;
        for(auto &p:mp) ans+=p.first*p.second;
        return ans;
    }
};