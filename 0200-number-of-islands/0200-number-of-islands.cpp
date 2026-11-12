class Solution {
public:
void bfs(vector<vector<char>>& grid,vector<vector<bool>>& visit, queue<pair<int,int>>& q){
   
        int m=grid.size();
        int n=grid[0].size();
    while(!q.empty()){
        pair<int,int> p=q.front();
        q.pop();
        int fr=p.first;
        int sc=p.second;
        if(fr-1>=0 && grid[fr-1][sc]=='1' && visit[fr-1][sc]==false){
            q.push({fr-1,sc});
            visit[fr-1][sc]=true;
        }
        if(fr+1<m && grid[fr+1][sc]=='1' && visit[fr+1][sc]==false){
            q.push({fr+1,sc});
            visit[fr+1][sc]=true;
        }
        if(sc-1>=0 && grid[fr][sc-1]=='1' && visit[fr][sc-1]==false){
            q.push({fr,sc-1});
            visit[fr][sc-1]=true;
        }
        if(sc+1<n && grid[fr][sc+1]=='1' && visit[fr][sc+1]==false){
            q.push({fr,sc+1});
            visit[fr][sc+1]=true;
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
         queue<pair<int,int>> q;
        vector<vector<bool>> visit(m,vector<bool>(n,false));
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int ele=grid[i][j]-'0';

                if(visit[i][j]==false && ele==1 ){
                   count++;
                   visit[i][j]=true;
                   q.push({i,j});
                   bfs(grid,visit,q);
                   
                }
            }
        }
        return count;
    }
};