class Solution {
public:
    int countVowelSubstrings(string word) {
        int ans=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            unordered_set<int> st;
            for(int j=i;j<n;j++){
                if(word[j]=='a' || word[j]=='e' || word[j]=='i' || word[j]=='o' || word[j]=='u'){
                    st.insert(word[j]);
                }
                else break;
                if(st.size()==5) ans++;
            }
        }
        return ans;
        
    }
};