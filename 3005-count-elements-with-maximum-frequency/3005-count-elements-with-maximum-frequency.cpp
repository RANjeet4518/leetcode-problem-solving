class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>>pq;
        for(auto p:nums) mp[p]++;
        for(auto p:mp) pq.push({p.second,p.first});
        int k=pq.top().first;
        int sum=k;
        pq.pop();
        while(pq.size()>0){
            if(pq.top().first==k){
                sum+=pq.top().first;
            }
            else break;
            pq.pop();
        }
        return sum;
    }
};