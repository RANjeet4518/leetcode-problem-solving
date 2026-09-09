class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        while(max(start,goal)){
            if(start%2!=goal%2){
                count++;
            }
            start>>=1;
            goal>>=1;
        }
        return count;
    }
};