class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        for( i=s.size()-1;i>=0;i--){
            if(isalpha(s[i])) break;
        }
        int ans=0;
        for(int j=i;j>=0;j--){
            if(s[j]==' '){
                break;
            }
            ans++;
        }
        return ans;
    }
};