class Solution {
public:
bool checkdigit(int num){
    int sum=0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    if(sum%2==0) return true;
    return false;
}
    int countEven(int num) {
        int ans=0;
        for(int i=2;i<=num;i++){
            if(checkdigit(i)){
               ans++;
            }
        }
        return ans;
    }
};