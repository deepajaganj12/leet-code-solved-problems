class Solution
{
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) const
    {
        const int r = click.at(0);
        const int c = click.at(1);

        if (board[r][c] == 'M')
        {
            board[r][c] = 'X';
            return board;
        }

        reveal(board, r, c);

        return board;
    }

private:
    bool is_in_bounds(const vector<vector<char>>& board, int r, int c) const
    {
        return r >= 0 && r < board.size() && c >= 0 && c < board[0].size();
    }

    int calc_mine_count(const vector<vector<char>>& board, int r, int c) const
    {
        int count = 0;

        for (const auto [dr, dc] : dirs)
        {
            const int r_dr = r + dr;
            const int c_dc = c + dc;

            if (is_in_bounds(board, r_dr, c_dc) && (board[r_dr][c_dc] == 'M' || board[r_dr][c_dc] == 'X'))
                ++count;
        }

        return count;
    }

    void reveal(vector<vector<char>>& board, int r, int c) const
    {
        if (const int mines = calc_mine_count(board, r, c); mines > 0)
        {
            board[r][c] = mines + '0';
            return;
        }

        board[r][c] = 'B';

        for (const auto [dr, dc] : dirs)
        {
            const int r_dr = r + dr;
            const int c_dc = c + dc;

            if (is_in_bounds(board, r_dr, c_dc) && board[r_dr][c_dc] == 'E')
                reveal(board, r_dr, c_dc);
        }
    }

private:
    const vector<pair<int, int>> dirs {
        {-1, -1}, {-1, 0}, {-1, 1},
        { 0, -1},          { 0, 1},
        { 1, -1}, { 1, 0}, { 1, 1}
    };
};
