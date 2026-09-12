class Solution {
public:
void findAllString(int n,int k,vector<string>& ans,string s,int cost){
    if(s.size()==n && cost<=k){
        ans.push_back(s);
        return;

    }
   
    findAllString(n,k,ans,s+'0',cost);
  
    int p=s.size();
 
    if(p==0 || (s.size()!=0 && s.back()!='1' && (cost+p)<=k)) findAllString(n,k,ans,s+'1',cost+p);
   



}
    vector<string> generateValidStrings(int n, int k) {
        string s;
        vector<string> ans;
    findAllString(n,k,ans,s,0);
    return ans;

        
    }
};