class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& nums) {
        vector<vector<int>>adj(n);
        vector<int> inlin(n,0);
        vector<int> ans;
        for(auto &p:nums){
          adj[p[1]].push_back(p[0]);
          inlin[p[0]]++;

        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(inlin[i]==0) q.push(i);
        }
        while(q.size()>0){
            int fr=q.front();
            q.pop();
            ans.push_back(fr);
            for(auto p:adj[fr]){
                inlin[p]--;
                if(inlin[p]==0) q.push(p);
            }
        }
        return (ans.size()==n);
        
    }
};