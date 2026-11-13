class Solution {
public:
   void bfs(vector<vector<int>>& adj,vector<int>& visit,int i,bool& ans){
    queue<int> q;
    q.push(i);
    visit[i]=0;
    while(q.size()>0){
         int fr=q.front();
         q.pop();
         int color=visit[fr];
         for(auto ele:adj[fr]){
            if(visit[ele]==visit[fr]){
                ans=false;
                return;
            }
            if(visit[ele]==-1){
                visit[ele]=1-color;
                q.push(ele);
            }
         }
    }
   }
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        bool ans=true;
        vector<int> visit(n,-1);
        for(int i=0;i<n;i++){
            if(visit[i]==-1){
                bfs(adj,visit,i,ans);
            }
            if(ans==false)return false;
        }
        return true;
    }
};