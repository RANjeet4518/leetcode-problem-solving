class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        vector<int> nums(n,-1);
        for(int i=0;i<n;i++){
            int k;
          
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                     k=j;
                     break;
                }
            }
          
            for(int p=k;p<nums2.size();p++){
                if(nums1[i]<nums2[p]){
                    nums[i]=nums2[p];
                    break;
                }
            }
           
        }
        return nums;
        
    }
};