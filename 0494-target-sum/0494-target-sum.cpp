class Solution {
public:
void Allprint(vector<int>& nums,int target,int& count,int sum,int i){
    if(target==sum  && i==nums.size()){
        count++;
        return;
    }
    if( i==nums.size()){
        return;
    }
    
    Allprint(nums,target,count,sum+nums[i],i+1);
    

    Allprint(nums,target,count,sum-nums[i],i+1);

}
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0;
        int count=0;
        int i=0;
        sort(nums.begin(),nums.end());
    Allprint(nums,target,count,sum,i);
    return count;

        
    }
};