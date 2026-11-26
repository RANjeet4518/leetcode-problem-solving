class Solution {
public:
static const bool cmp(vector<int>& a,vector<int>& b){
    return a[1]<b[1];
}
    int scheduleCourse(vector<vector<int>>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),cmp);
        priority_queue<int> pq;
        int time=0,end=0,count=0;
        for(auto p:nums){
         time+=p[0];
         pq.push(p[0]);
         if(time>p[1]){
            time-=pq.top();
            pq.pop();
        
         }
        
        }

        return pq.size();
    }
};