class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> adj(n);
        for(auto p:edges){
          adj[p[0]].push_back(p[1]);
          adj[p[1]].push_back(p[0]);
        }
        vector<bool> visit(n,false);
        visit[start]=true;
        queue<int> q;
        q.push(start);

         while(q.size()>0){
            int fr=q.front();
            q.pop();
            for(int ele:adj[fr]){
                if(!visit[ele]){
                    q.push(ele);
                    visit[ele]=true;
                }
                if(visit[end]) return true;
            }
         }
         return visit[end];

        
    }
};