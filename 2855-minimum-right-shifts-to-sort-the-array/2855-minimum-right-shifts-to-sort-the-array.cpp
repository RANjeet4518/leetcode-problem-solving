class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
         int n=nums.size();
     int count=0;
     int j=n-1;
     vector<int> v=nums;
     sort(v.begin(),v.end());
      while(true){
        if(nums[0]>nums[j]){
            nums.insert(nums.begin(),nums[j]);
            count++;
            nums.pop_back();
        }
        else{
            if(nums[0]>nums[n-1] && count==0){
                 count=-1;
            }
             break;
        }
      }
      if(v==nums) return count;
      return -1;
        
    }
};