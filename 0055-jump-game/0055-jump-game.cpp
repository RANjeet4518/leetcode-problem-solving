class Solution {
public:
 
    bool canJump(vector<int>& nums) {
        int maximumReach=0;
        for(int i=0;i<nums.size();i++){
            if(maximumReach<i){
                return false;
            }
            maximumReach=max(maximumReach,i+nums[i]);
            if(maximumReach>=nums.size()-1){
                return true;
            }
        } 
        return true;
        
        

        
    }
};