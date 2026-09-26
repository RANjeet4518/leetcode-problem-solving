class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int end=points[0][1];
        int count=0;
        for(int i=1;i<points.size();i++){
            if(end>=points[i][0]){
                if(end>points[i][1]){
                    end=points[i][1];
                }
                count++;
                continue;
            }
            else end=points[i][1];
        }
        return points.size()-count;
        
    }
};