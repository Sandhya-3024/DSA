class Solution {
public:

    void bfs(vector<vector<int>>& grid, vector<vector<int>>& vis, int delrow[], int delcol[], queue<pair<pair<int, int>, int>>& q, int &tm) {
        int n = grid.size();
        int m = grid[0].size();
        
        while (!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int t = q.front().second;
            q.pop();
            
            // Update the maximum time
            tm = max(tm, t);

            // Explore all 4 possible directions
            for (int i = 0; i < 4; i++) {    
                int nrow = row + delrow[i];
                int ncol = col + delcol[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, t + 1});
                    vis[nrow][ncol] = 2;  // Mark the cell as visited
                }
            }
        }
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int tm = 0;
        int n = grid.size();
        int m = grid[0].size();
        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, 1, 0, -1};
        vector<vector<int>> vis(n, vector<int>(m, 0));
        queue<pair<pair<int, int>, int>> q;

        // Initialize the queue with all initially rotten oranges
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
            }
        }

        // Perform BFS to propagate the rot
        bfs(grid, vis, delrow, delcol, q, tm);

        // Check if there are any fresh oranges left
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && vis[i][j] != 2) {
                    return -1;  // Return -1 if there are still fresh oranges
                }
            }
        }

        return tm;  // Return the maximum time
    }
};
