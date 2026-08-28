class Solution {
public:

    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }
    string reverseWords(string s) {
        int n=s.size();
        int count1=0,count2=0;
        int i;
        for(i=0;i<s.size();i++){
            char ch=s[i];
            if(!isalpha(ch)) break;
            if(isVowel(s[i])) count1++;
        }
        i++;
        int k=i;
        for(int j=i;j<s.size();j++){
            if(isVowel(s[j])) count2++;
            if(!isalpha(s[j])){
                if(count1==count2){
                  int p=j-1;
                  while(k<=p) swap(s[k++],s[p--]);
                 
                }
                 
                    k=j+1;
                
                // count1=count2;
                count2=0;
            }
        }
        if(count1==count2){
            int t=n-1;
            while(k<=t) swap(s[k++],s[t--]);
        }
        return s;

        
    }
};