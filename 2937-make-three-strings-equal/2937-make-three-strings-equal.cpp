class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int l=s1.size();
        int m=s2.size();
        int n=s3.size();
        int i=0,j=0,k=0;
       while(i!=l && j!=m && k!=n){
        if(s1[i]!=s2[j] || s2[j]!=s3[k] || s1[i]!=s3[k]) break;
        if(s1[i]==s2[j] && s2[j]==s3[k]){
            i++;
            j++;
            k++;
        }
       
       }
       if(i==l && j==m && k==n)   return 0;
       if(i==0) return -1;
       return (n+m+l)-(i+j+k);
        
    }
};