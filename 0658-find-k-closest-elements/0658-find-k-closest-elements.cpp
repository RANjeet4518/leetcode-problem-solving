class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({abs(nums[i]-x), nums[i]});
            if(pq.size()>k) pq.pop();

        }
        vector<int> ans;
        while(!pq.empty()){
            auto p=pq.top();
            ans.push_back(p.second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};