class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_element1=*max_element(nums.begin(),nums.end());
        auto it=find(nums.begin(),nums.end(),max_element1);
        if(it!=nums.end()){
            nums.erase(it);
        }
        int max_element2=*max_element(nums.begin(),nums.end());
        return (max_element1-1)*(max_element2-1);



        
    }
};