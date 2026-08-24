class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<string> ans(score.size());
        int count=1;

    while(!empty(pq)){
          int first=pq.top().first;
        int sec=pq.top().second;
        if(count<=3){
           if(count==1) ans[sec]="Gold Medal";
           if(count==2) ans[sec]="Silver Medal";
           if(count==3) ans[sec]="Bronze Medal";
          
        }
        else{
        ans[sec]=to_string(count);
        }
        count++;
        pq.pop();
    }
    return ans;
    
        
        
    }
};