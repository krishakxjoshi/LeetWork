#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        
        // Lower diagonals (including main)
        for(int i=0;i<n;i++){
            vector<int> vec;
            for(int j=0;j+i<n;j++){
                vec.push_back(grid[i+j][j]);
            }
            sort(vec.rbegin(), vec.rend()); // sort in descending
            for(int j=0;j+i<n;j++){
                grid[i+j][j] = vec[j];
            }
        }

        // Upper diagonals (excluding main)
        for(int j=1;j<n;j++){
            vector<int> vec;
            for(int i=0;j+i<n;i++){
                vec.push_back(grid[i][i+j]);
            }
            sort(vec.begin(), vec.end()); // sort in ascending
            for(int i=0;j+i<n;i++){
                grid[i][i+j] = vec[i];
            }
        }

        return grid;
    }
};

int main() {
    // Example usage
    Solution sol;
    vector<vector<int>> grid = {
        {3, 3, 1, 1},
        {2, 2, 1, 2},
        {1, 1, 1, 2}
    };

    vector<vector<int>> result = sol.sortMatrix(grid);

    for(auto &row : result) {
        for(auto &x : row) cout << x << " ";
        cout << "\n";
    }
}
