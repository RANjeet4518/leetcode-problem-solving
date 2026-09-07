class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        string ans(n,' ');
        unordered_map<char,int>mp;
        for(auto &p:s){
            mp[p]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto &p:mp){
            pq.push({p.second,p.first});
        }
        
        int count=0;
        int i=0;
        while(!pq.empty()){
            pair<int,int> p={pq.top().second,pq.top().first};
            if(n%2==0 && p.second>n/2) return "";
            if(n%2!=0 && p.second>n/2+1) return "";
            int count=p.second;
          while(count--){
            if(i<n) ans[i]=p.first;
             if(n%2==0 && i==n-2){
               i=1;
               continue;
          }
          else if(n%2!=0 && i==n-1){

            i=1;
            continue;
          }
          
          i+=2;
          }
         pq.pop();
         
        }
        return ans;
        
    }
};