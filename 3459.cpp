#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> direction = {{1,1},{1,-1},{-1,-1},{-1,1}};
    int dp[500][500][4][2];

    int dfs(vector<vector<int>>& grid, int i, int j, bool allow, int dir, int target) {
        int ni = i + direction[dir][0];
        int nj = j + direction[dir][1];
        
        if (ni < 0 || ni >= grid.size() || nj < 0 || nj >= grid[0].size() || grid[ni][nj] != target)
            return 0;

        if (dp[ni][nj][dir][allow] != -1) 
            return dp[ni][nj][dir][allow];

        int nottake = 1 + dfs(grid, ni, nj, allow, dir, 2 - target);
        int take = 0;
        if (allow) {
            take = 1 + dfs(grid, ni, nj, false, (dir + 1) % 4, 2 - target);
        }

        return dp[ni][nj][dir][allow] = max(take, nottake);
    }

    int lenOfVDiagonal(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0;
        memset(dp, -1, sizeof(dp));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    for (int dir = 0; dir < 4; dir++) {
                        ans = max(ans, 1 + dfs(grid, i, j, true, dir, 2));
                    }
                }
            }
        }
        return ans;
    }
};

int main() {
    // Example usage:
    Solution sol;
    vector<vector<int>> grid = {
        {1,2,1},
        {2,1,2},
        {1,2,1}
    };
    cout << sol.lenOfVDiagonal(grid) << endl;
    return 0;
}
