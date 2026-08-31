class Solution {
public:
    int minimumDeletions(vector<int>& v) {
        int minIndex = min_element(v.begin(), v.end()) - v.begin();
        int maxIndex = max_element(v.begin(), v.end()) - v.begin();
        int n=v.size();
         int mn=INT_MAX;
         int k;
         if(minIndex<maxIndex){
         if(mn>(minIndex+1+(n-maxIndex))){
            mn=minIndex+1+(n-maxIndex);

         }
         }
         else{
            mn=maxIndex+1+(n-minIndex);
         }
         k=max(minIndex,maxIndex)+1;
         int p =n-min(minIndex,maxIndex);
         if(mn>k) mn=k;
         if(mn>p) mn=p;
         return mn;
    }
};