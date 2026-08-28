class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> st;
        for(auto &p:s){
          if(st.find(p)!=st.end()){
            return p;
          }
          st.insert(p);
        }
        char ch='a';
          return ch;
    }
};