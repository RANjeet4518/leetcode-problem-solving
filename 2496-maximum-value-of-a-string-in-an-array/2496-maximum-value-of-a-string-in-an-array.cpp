class Solution {
public:
    int maximumValue(vector<string>& v) {
        int n=v.size();
        int mx=0;
        int dig=0;
        for(auto s:v){
            int count=0;
            for(char ch:s){
                if(isalpha(ch)){
                    count=1;
                    mx = max(mx,(int)s.size());
                    break;
                }
                int k=ch-'0';
                dig =max(dig ,k);

            }
            if(count==0){
                int l=stoi(s);
                mx=max(mx,l);
                dig=0;
            }
        }
        return mx;
        
    }
};