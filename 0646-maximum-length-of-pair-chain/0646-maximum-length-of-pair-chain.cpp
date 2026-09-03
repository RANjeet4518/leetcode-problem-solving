class Solution {
public:
typedef pair<int,int> pi;

    int findLongestChain(vector<vector<int>>& pairs) {
        int n=pairs.size();

        priority_queue<pi,vector<pi>,greater<pi>> pq;
        for(auto &p:pairs){
        

            pq.push({p[1],p[0]});
        }
        pairs.clear();
        while(pq.size()>0){
           
            pairs.push_back({pq.top().second,pq.top().first});
            pq.pop();
        }
        int count=0;
        int prevEnd=INT_MIN;
        for(auto &p:pairs){
             if(p[0]>prevEnd){
                count++;
                prevEnd=p[1];
             }
        }
        return count;


        
    }
};