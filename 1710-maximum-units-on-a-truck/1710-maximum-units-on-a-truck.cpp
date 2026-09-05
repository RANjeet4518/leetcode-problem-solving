class Solution {
public:
    typedef pair<int,int> pi;
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pi> pq;
        for(auto &p:boxTypes){
            pq.push({p[1],p[0]});
        }
        int ans=0;
       
        while(!pq.empty()){
            if(truckSize==0){
                break;

            }
            int k=pq.top().second;
            if(k>truckSize){
                k=truckSize;
            }
            ans+=pq.top().first*k;
            truckSize-=k;
            pq.pop();

        }
   return ans;
        

        
    }
};