class Solution {
public:
    string majorityFrequencyGroup(string s) {
        int n=s.size();
        unordered_map<char,int>mp1;
        map<int,int,greater<int>>mp2;
        for(auto &p:s) mp1[p]++;
        for(auto p:mp1) mp2[p.second]++;
        int k=0;
        int l;
        for(auto p:mp2){
            if(p.second>k){
                 k=p.second;
                 l=p.first;

            }
        }
        string st;
        for(auto p:mp1){
            if(p.second==l) st+=p.first;
        }
        return st;
        
    }
};