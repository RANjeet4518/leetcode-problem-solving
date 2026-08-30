class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
       unordered_map<int,vector<int>> mp;
       for(int i=0;i<nums.size();i++){
          mp[nums[i]].push_back(i);
       }
       int count=0;
       for(auto &p:mp){
        int count1=0;
        vector<int> ans=p.second;
        if(ans.size()==1){
             count++;
             continue;
             }
           for(int i=1;i<ans.size();i++){
             if((ans[i-1]+1)!=ans[i]){
                count1=1;
                break;
             }
        
           }
                if(count1==0) count++;
           ans.clear();
       }
       return count;


        
    }
};