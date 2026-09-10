class Solution {
public:
typedef pair<int,int> pi;
    string repeatLimitedString(string s, int repeatLimit) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(auto p:s) mp[p]++;
        priority_queue<pair<char,int>>pq;
        for(auto p:mp) pq.push(p);
        string result;
        while(!pq.empty()){
            pi largest=pq.top();
            pq.pop();
            int len=min(repeatLimit,largest.second);
            result+=string(len,largest.first);
            pi selr;
            if(largest.second-len>0){
              if(!pq.empty()){
                selr= pq.top();
              result+=selr.first;
              pq.pop();
              }
              else{
                return result;
              }
             if(selr.second-1>0) pq.push({selr.first,selr.second-1});
             pq.push({largest.first,largest.second-len});
            }

        }
        return result;
        
    }
};