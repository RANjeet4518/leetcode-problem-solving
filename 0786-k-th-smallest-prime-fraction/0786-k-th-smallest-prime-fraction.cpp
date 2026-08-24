class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<vector<double>> pq;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                pq.push({(double)arr[i]/(double)arr[j],(double)arr[i],(double)arr[j]});
                if(pq.size()>k) pq.pop();
            }
        }
        vector<double> ans=pq.top();
         int x = (int)ans[1];
         int y = (int)ans[2];
        return {x,y};
       
        
    }
};