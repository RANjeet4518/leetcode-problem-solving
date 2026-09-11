class Solution {
public:
    int findComplement(int num) {
        int count=0;
        int temp=num;
        while(temp){
            count++;
            temp>>=1;
        }
        long long k=pow(2,count);
        k--;
        return num^k;

        
    }
};