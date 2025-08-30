#include <vector>
using namespace std;

class Solution {
public:
    bool isvalidrow(vector<vector<char>>& grid, int r, int c) {
        for (int j = 0; j < 9; j++) {
            if (j != c && grid[r][j] == grid[r][c]) return false;
        }
        return true;
    }

    bool isvalidcol(vector<vector<char>>& grid, int r, int c) {
        for (int i = 0; i < 9; i++) {
            if (i != r && grid[i][c] == grid[r][c]) return false;
        }
        return true;
    }

    bool isvalidmatr(vector<vector<char>>& grid, int r, int c) {
        int str = r - (r % 3), stc = c - (c % 3);
        for (int i = str; i < str + 3; i++) {
            for (int j = stc; j < stc + 3; j++) {
                if ((i != r || j != c) && grid[i][j] == grid[r][c]) return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& grid) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (grid[i][j] != '.') {
                    if (!isvalidrow(grid, i, j) || !isvalidcol(grid, i, j) || !isvalidmatr(grid, i, j))
                        return false;
                }
            }
        }
        return true;
    }
};
