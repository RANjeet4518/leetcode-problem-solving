class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int count=0;
        int i=0;
        int j=n-1;
        while(i<j){
            if((people[i]+people[j])<=limit){
                i++;
                j--;
                count++;
            }
            else j--;
        }
        int k=n-count*2;
        return k+count;

        
    }
};