class Solution {
public:
int findPower(long long x,long long y, long long mx){
    long long result=1;
    while(y>0){
      if(y & 1){
        result=(result*x)%mx;
      }
      x=(x*x)%mx;
      y>>=1;
    }
    return result;
}
    int sumDecoded(vector<long long>& nums) {
        long long mx=1000000007;
        int sum=0;
        long long w,d;

        for(auto p:nums){
            w=p%10;
            d=p/10;
            string s=to_string(d);
            int n=s.size();
            int x=stoi(s.substr(0,w));
            int y=stoi(s.substr(w));
            long long k=findPower(x,y,mx);
           
            sum=(sum+k)%mx;
        }
        return sum;
    }
};