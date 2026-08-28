class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {

        int n=s.size();
        string temp="";
        int j=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') count++;
            while(count==k && j<=i){
                if(temp.size()==0){
                    temp=s.substr(j,i-j+1);
                }
                else{
                    string s2=s.substr(j,i-j+1);
                    if(s2.size()==temp.size() && s2<temp){
                       
                            temp=s2;
                   
                    }
                    else if(s2.size()<temp.size()) temp=s2;
                }
                if(s[j]=='1') count--;
                j++;
            }
        }
        return temp;
    }
};