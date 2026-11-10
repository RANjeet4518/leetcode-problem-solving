class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<bool> visit(n,false);
        queue<int> q;
        visit[0]=true;
        for(int i=0;i<nums[0].size();i++){
            visit[nums[0][i]]=true;
            q.push(nums[0][i]);
        } 
      while(!q.empty()){
        int fr=q.front();
        q.pop();
        for(int i=0;i<nums[fr].size();i++){
            if(!visit[nums[fr][i]]){
                 q.push(nums[fr][i]);
                 visit[nums[fr][i]]=true;
            }

        }
      }
      for(int i=0;i<n;i++){
        if(visit[i]==false) return false;
      }
      return true;
    }
};