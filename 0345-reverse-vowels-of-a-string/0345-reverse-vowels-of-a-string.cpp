class Solution {
public:
bool checkVowel(char ch){
    if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' ||ch=='I' || ch=='O' || ch=='E' || ch=='U'){
                return true;
            }
            return false;
}

    string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        char ch;

        while(i<=j){
            char chi=s[i];
            char chj=s[j];
          if(checkVowel(chi) && checkVowel(chj)){
            char temp=chi;
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
          }
         else if(!checkVowel(chi)) i++;
         else if(!checkVowel(chj)) j--;
   
        }
        string ans=s;
        return ans;
        
    }
};