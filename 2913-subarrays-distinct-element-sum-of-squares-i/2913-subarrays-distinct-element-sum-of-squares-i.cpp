class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int>temp;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
             for(int j=i;j<n;j++){
                mp[nums[j]]++;
                sum+=mp.size()*mp.size();
             }
             mp.erase(mp.begin(),mp.end());
        }

        return sum;
    }
};