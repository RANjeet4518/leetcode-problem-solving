class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        int temp=pow(2,n)-1;
        ans.push_back(0);
        int count=1;
        while(temp--){
        //    int k=count^(count>>1);
           ans.push_back(count^(count>>1));
           count++;
        }
        return ans;
    }
};