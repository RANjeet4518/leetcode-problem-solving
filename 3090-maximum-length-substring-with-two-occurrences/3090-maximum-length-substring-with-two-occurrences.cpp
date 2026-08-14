class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<char,int> mp;
        int j=0;
        int mx=0;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            
            mp[ch]++;
            if(mp[s[i]]<=2){
                mx=max(mx,i-j+1);
            }
            else{
                while(mp[ch]>2){
                    mp[s[j]]--;
                    j++;
                }
            }

        }
        return mx;
    
        
    }
};