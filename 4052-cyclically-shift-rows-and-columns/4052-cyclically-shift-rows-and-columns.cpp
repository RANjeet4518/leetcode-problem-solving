class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& r, vector<int>& c) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=grid[i][j];
            }
        }

        for(int i=0;i<n;i++){
               int  k=r[i];
            for(int j=0;j<n;j++){
           
                int ind=(k+j)%n;
                ans[i][j]=grid[i][ind];
            }
        }
        grid =ans;
         for(int i=0;i<n;i++){
             int k=c[i];
            for(int j=0;j<n;j++){
                
                int ind=(k+j)%n;
                ans[j][i]=grid[ind][i];
            }
        }
        return ans;
    }
};