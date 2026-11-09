class Solution {
public:

    void bfs(vector<vector<int>>& nums,
             vector<bool>& visited,
             int start) {

        int n = nums.size();

        queue<int> q;

        q.push(start);
        visited[start] = true;

        while (!q.empty()) {

            int node = q.front();
            q.pop();

            for (int j = 0; j < n; j++) {

                if (nums[node][j] == 1 && !visited[j]) {

                    visited[j] = true;
                    q.push(j);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& nums) {

        int n = nums.size();

        vector<bool> visited(n, false);

        int count = 0;

        for (int i = 0; i < n; i++) {

            if (!visited[i]) {

                count++;

                bfs(nums, visited, i);
            }
        }

        return count;
    }
};