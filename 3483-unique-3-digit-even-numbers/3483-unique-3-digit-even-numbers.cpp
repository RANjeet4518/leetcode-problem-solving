class Solution {
public:
void findCombination(vector<int>& nums,int& count,vector<int>& ans,vector<bool>& arr){
   
    if(ans.size()==3){
        if(ans.back()%2==0) count++;
     return;
    }

   
    for(int i=0;i<nums.size();i++){
    if(i > 0 && nums[i] == nums[i-1] && arr[i-1] == false)
    continue;

        if(ans.size()==0 && nums[i]==0){
          
             continue;
        }
        if(arr[i]==true){
         
             continue;
        }
        
        ans.push_back(nums[i]);
        arr[i]=true;
        findCombination(nums,count,ans,arr);
        ans.pop_back();
        arr[i]=false;


    }
}


    int totalNumbers(vector<int>& digits) {
        sort(digits.begin(),digits.end());
        vector<int> ans;
        int count=0;
        
        vector<bool> arr(digits.size(),false);
        findCombination(digits,count,ans,arr);
        return count;
   
        
    }
};