class Solution {
public:
typedef pair<int,pair<int,int>> pip;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int n=nums.size();
        priority_queue<pip,vector<pip>,greater<pip>> pq;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i][0]);
            pq.push({nums[i][0],{i,0}});
        }
        int end=mx,st=pq.top().first;
        while(true){
           int row=pq.top().second.first;
           int col=pq.top().second.second;
           if(col==nums[row].size()-1) break;
           pq.push({nums[row][col+1],{row,col+1}});
           pq.pop();
           mn=pq.top().first;
           mx=max(mx,nums[row][col+1]);
           if(mx-mn<end-st){
            end=mx;
            st=mn;
           }
        }
        return {st,end};
        
    }
};