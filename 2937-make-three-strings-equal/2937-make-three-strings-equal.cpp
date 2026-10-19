class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
     int n=min((int)s1.size(),min((int)s2.size(),(int)s3.size()));
     int i=0;
       while(i<n && s1[i]==s2[i] && s2[i]==s3[i]){
         i++;
       }
       if(i==0) return -1;
       return s1.size()+s2.size()+s3.size()-i*3;
    }
};