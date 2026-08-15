class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& nums, int k) {
          priority_queue<pair<int,int>> pq;
          vector<vector<int>> ans;
          for(int i=0;i<nums.size();i++){
            int distance=nums[i][0]*nums[i][0] + nums[i][1]*nums[i][1];
            pq.push({distance,i});
            if(pq.size()>k){
                pq.pop();
            }
          }
          while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            ans.push_back({nums[p.second][0],nums[p.second][1]});

          }
          return ans;
      }
};