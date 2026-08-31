class Solution {
public:
typedef pair<int,int> pr;
    vector<int> frequencySort(vector<int>& nums) {

    unordered_map<int,int> mp;
    for(auto l:nums){
      mp[l]++;
      
    }
    vector<int> ans;
   
   priority_queue< pr,vector<pr>, greater<pair<int,int>>>pq;
    for(auto k:mp){
       pr pi={k.second,-k.first};
      pq.push(pi);
    }
    while(pq.size()>0){
     int q=pq.top().first;
     while(q>0){
        ans.push_back(-pq.top().second);
        q--;
     }
      pq.pop();
    }
    return ans;
    
    }
};