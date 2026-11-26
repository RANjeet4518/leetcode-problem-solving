class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& nums) {
        vector<vector<int>> adj(n);
        vector<int> indre(n,0);
        for(auto p:nums){
            adj[p[1]].push_back(p[0]);
            indre[p[0]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indre[i]==0)q.push(i);
        }
        vector<int> ans;
        while(q.size()>0){
            int fr=q.front();
            q.pop();
            ans.push_back(fr);
            for(auto p:adj[fr]){
                indre[p]--;
                if(indre[p]==0) q.push(p);
            }
        }
        if(ans.size()==n)  return ans;
        return {};
    }
};