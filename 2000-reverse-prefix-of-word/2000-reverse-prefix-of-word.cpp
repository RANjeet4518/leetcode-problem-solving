class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=0;
        int i=0;
        int j=0;
        
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                count++;
                j++;
                break;
            }
            j++;
            if(j==word.size()){
                j=0;

            }
        }
        string s;
       s=word.substr(0,j);
       reverse(s.begin(),s.end());
        return s+word.substr(j);
        
    }
};