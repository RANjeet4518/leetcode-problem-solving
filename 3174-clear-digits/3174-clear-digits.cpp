class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        for(int i=0;i<s.size();i++){
            if(!isalpha(s[i])){
                if(i-1>=0 && isalpha(s[i-1])){
                    s.erase(i-1,2);
                    i-=2;
                }
            }
        }
        return s;
        
    }
};