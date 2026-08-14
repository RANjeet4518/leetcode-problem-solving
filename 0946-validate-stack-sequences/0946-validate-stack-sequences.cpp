class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size();
        stack<int> st1;
        stack<int> st2;
        for(int i=n-1;i>=0;i--){
            st2.push(popped[i]);
        }
        for(int i=0;i<n;i++){
            st1.push(pushed[i]);
         while(st1.size()!=0 && st2.top()==st1.top()){
            st2.pop();
            st1.pop();
           
         }     
        }
        // if(st1.size()!=0 && st2.top()!=st1.top()){
        //     return false;
        // }
        // else{
        //     while(st1.size()>0 && st2.top()==st1.top()){
        //         st1.pop();
        //         st2.pop();
        //     }
        // }
        return st1.size()==0 ? true:false;
        
    }
};