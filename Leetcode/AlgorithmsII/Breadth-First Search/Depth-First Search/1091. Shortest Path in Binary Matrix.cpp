class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
      int n = grid.size();
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;
        int dir[8][2] = {{-1, 0}, {0, -1}, {1, 0}, {0,1}, {-1, -1}, {1, 1}, {1, -1}, {-1,1}};
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        queue<pair<int, int>> q;
        q.push({0, 0});
        dist[0][0] = 1;
        while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            for(int k = 0; k < 8; ++k) {
                int x = i + dir[k][0];
                int y = j + dir[k][1];
                if(x >= 0 && y >= 0 && x < n && y < n && grid[x][y] == 0) {
                    if(dist[x][y] > dist[i][j] + 1) {
                        q.push({x, y});
                        dist[x][y] = dist[i][j] + 1;
                    }
                }
            }
        }
        if(dist[n-1][n-1] == INT_MAX)
            return -1;
        else
            return dist[n-1][n-1];   
    }
};