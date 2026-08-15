class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& nums) {
        int minDis=INT_MAX;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            pair<int,int> p;
            p.first=nums[i][0];
            p.second=nums[i][1];
            int distance=(p.first-x)*(p.first-x) + (p.second-y)*(p.second-y);
            if(distance==0)  return i;
        if(distance < minDis && (p.first==x  || p.second==y)){
            ans=i;
            minDis=distance;
        }
        }
        return ans; 
        
    }
};