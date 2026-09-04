class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        int sum=0;
        for(auto &p:nums){
            pq.push(p);
            sum+=p;

        }
        while(!empty(pq)){
            if(k==0)break;
            sum-=pq.top();
            int temp=-pq.top();
            pq.pop();
            pq.push(temp);
            sum+=temp;
            k--;
            
        }
        return sum;

        
    }
};