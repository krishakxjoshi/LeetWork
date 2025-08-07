class Solution {
public:
    int solveupper(int i,int j,vector<vector<int>>& dp,vector<vector<int>>& fruits){
        int n = fruits.size();
        if (j >= n || i >= n || j < 0) return 0;
        if (i >= j) return 0;  // skip diagonal and below
        if (dp[i][j] != -1) return dp[i][j];

        int fruit = fruits[i][j];
        int best = 0;
        best = max(best, solveupper(i + 1, j, dp, fruits));
        best = max(best, solveupper(i + 1, j + 1, dp, fruits));
        best = max(best, solveupper(i + 1, j - 1, dp, fruits));

        return dp[i][j] = fruit + best;
    }

    int solvelower(int i,int j,vector<vector<int>>& dp,vector<vector<int>>& fruits){
        int n = fruits.size();
        if (i >= n || j >= n || i < 0) return 0;
        if (i <= j) return 0;  // skip diagonal and above
        if (dp[i][j] != -1) return dp[i][j];

        int fruit = fruits[i][j];
        int best = 0;
        best = max(best, solvelower(i, j + 1, dp, fruits));
        best = max(best, solvelower(i - 1, j + 1, dp, fruits));
        best = max(best, solvelower(i + 1, j + 1, dp, fruits));

        return dp[i][j] = fruit + best;
    }

    int maxCollectedFruits(vector<vector<int>>& fruits) {
        int n = fruits.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += fruits[i][i];  // main diagonal
        }

        vector<vector<int>> dp1(n, vector<int>(n, -1));
        vector<vector<int>> dp2(n, vector<int>(n, -1));

        ans += solveupper(0, n - 1, dp1, fruits);
        ans += solvelower(n - 1, 0, dp2, fruits);

        return ans;
    }
};
