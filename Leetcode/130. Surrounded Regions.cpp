class Solution {
public:
     void dfs(vector<vector <char>> &board, int n, int m, int i, int j) {
        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != 'O')  return;

        board[i][j] = 'A';
        dfs(board, n, m, i + 1, j);
        dfs(board, n, m, i, j + 1);
        dfs(board, n, m, i - 1, j);
        dfs(board, n, m, i, j - 1);
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (board[i][j] == 'O' && (i == 0 || j == 0 || i == n - 1 || j == m - 1))
                    dfs(board, n, m, i, j);

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (board[i][j] == 'A') board[i][j] = 'O';
                else if (board[i][j] == 'O')    board[i][j] = 'X';
    }
};