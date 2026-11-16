class Solution {
public:
    string digitSum(string s, int k) {
        int n=s.size();
     string ans;
       int sum;
        while(n>k){
            sum=0;
            
            for(int i=0;i<n;i++){
            sum+=(s[i]-'0');
            if(i%k==k-1){
                ans+=to_string(sum);
                sum=0;
            }
            else if(i==n-1){
                ans+=to_string(sum);
            }
            }
             s=ans;
             n=s.size();
             ans.clear();
        }
        return s;
    }
};