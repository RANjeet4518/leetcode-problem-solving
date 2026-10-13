class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1) return false;
        unordered_map<int,int> mp;
        int sum=0;
        for(int i=0;i<n;i++){
          
            if(i!=0 && nums[i]==0 && nums[i-1]==0){
                return true;
            }
            if(i!=0 && nums[i]==0 && nums[i-1]!=0){
                 if(i>=1 && sum%k==0) return true;
                 if(i>=1 && nums[i-1]%k==0) return true;
               continue;
            }
              if(i!=0 && nums[i]%k==0 && nums[i-1]%k!=0){
               continue;
            }

            sum+=nums[i];
            if(i>=1 && sum%k==0) return true;
            int p=sum%k;
            // if((mp.contains(p)) || (sum!=0 && p==0)) return true;
            mp[p]++;
           
            if(mp[p]==2) return true;
              
        }
        return false;
        
    }
};