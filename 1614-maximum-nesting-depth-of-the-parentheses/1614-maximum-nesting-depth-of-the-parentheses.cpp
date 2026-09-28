class Solution {
public:
    int maxDepth(string s) {
        int a=0,mx=0;
        for(char &p:s){
            if(p=='('){ a++;
            mx=max(mx,a);
            }
        
            else if(p==')') a--;
    
        }
            
        return mx;
        
    }
};