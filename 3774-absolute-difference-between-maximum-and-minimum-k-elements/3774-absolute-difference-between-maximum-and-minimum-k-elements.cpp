class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int p:nums) pq.push(p);
        int count=k;
        int minSum=0,maxSum=0;

        while(!empty(pq)){
            if(pq.size()<=k) minSum+=pq.top();
            if(count>0){
                maxSum+=pq.top();
                count--;
            } 
            pq.pop();
        }

        int ans=abs(minSum-maxSum);
        return ans;
        
    }
};