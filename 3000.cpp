// 3000.cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        vector<vector<int>> maxd;
        int maxHypo = 0;

        // Find maximum diagonal length squared
        for (int i = 0; i < dimensions.size(); i++) {
            int len = dimensions[i][0];
            int bre = dimensions[i][1];
            int hypo = (len * len) + (bre * bre);
            maxHypo = max(maxHypo, hypo);
        }

        // Collect all rectangles with maximum diagonal
        for (int i = 0; i < dimensions.size(); i++) {
            int len = dimensions[i][0];
            int bre = dimensions[i][1];
            if (maxHypo == (len * len) + (bre * bre)) {
                maxd.push_back(dimensions[i]);
            }
        }

        // If only one rectangle has max diagonal, return its area
        if (maxd.size() == 1) 
            return maxd[0][0] * maxd[0][1];

        // If multiple, return max area among them
        maxHypo = 0;
        for (int i = 0; i < maxd.size(); i++) {
            int len = maxd[i][0];
            int bre = maxd[i][1];
            maxHypo = max(maxHypo, (len * bre));
        }
        return maxHypo;
    }
};

// Example main function to test
int main() {
    Solution sol;
    vector<vector<int>> dimensions = {{3,4}, {6,8}, {5,12}, {9,12}};
    cout << sol.areaOfMaxDiagonal(dimensions) << endl;
    return 0;
}
