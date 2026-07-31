class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        for(char ch:word){
           mp[ch]++;
        }
    vector<int> v;
    for(auto p:mp){
        v.push_back(p.second);
    }
    int count=1;
    int ans=0;
    int count2=1;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0;i<v.size();i++){
        ans=ans + count*v[i];
        if(count2%8==0){
         count++;
        }
        count2++;
    }
    return ans;
        
    }
};