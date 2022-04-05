class Solution {
public:
    bool search(int r, int c, size_t i, const string &word, vector <vector <char>> &board) {
        if(i == word.size()){
            return true;
        }
        else if(r < 0 || r >= (int) board.size() || c < 0 || c >= (int) board[0].size()){
            return false;
        }
        else if(board[r][c] != word[i]){
            return false;
        } 
        board[r][c] = '#';
        bool ret = search(r - 1, c, i + 1, word, board) || search(r + 1, c, i + 1, word, board)
                || search(r, c - 1, i + 1, word, board) || search(r, c + 1, i + 1, word, board);
        board[r][c] = word[i];
        return ret;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int R = board.size(), C = board[0].size();
        for(int r = 0; r < R; ++r) {
            for(int c = 0; c < C; ++c) {
                if(search(r, c, 0, word, board)){
                    return true;}
            }
        }
        return false;
    }
};