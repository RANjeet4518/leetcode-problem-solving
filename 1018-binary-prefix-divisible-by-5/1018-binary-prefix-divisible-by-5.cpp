class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int sum=0;
        vector<bool> ans;
        int count=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) sum=sum*2;
        else sum=sum*2+1;
        sum%=5;
        cout<<sum<<" ";
     if(sum%5==0) ans.push_back(true);
     else ans.push_back(false);
   
    
    }
    return ans;
    }
};