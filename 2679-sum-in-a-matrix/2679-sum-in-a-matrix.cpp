class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        priority_queue<vector<int>> pq;
        int ans=0;
         vector<int> temp;
        for(int i=0;i<nums.size();i++){
           
            for(int j=0;j<nums[0].size();j++){
               temp.push_back(nums[i][j]);
            }
            sort(temp.begin(),temp.end());
            pq.push(temp);
            temp.clear();
        }
        nums.clear();
         while(!pq.empty()){
            nums.push_back(pq.top());
            pq.pop();
         }
         priority_queue<int> pq1;

         for(int i=0;i<nums[0].size();i++){
            for(int j=0;j<nums.size();j++){
                pq1.push(nums[j][i]);
            }
            ans+=pq1.top();
            while(!pq1.empty()) pq1.pop();
         }
    
        return ans;
    }
};