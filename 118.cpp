
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for (int i = 0; i < numRows; i++) {
            vector<int> b(i + 1);
            a.push_back(b);
            for (int j = 0; j <= i; j++) {
                if (j == 0 || i == j)
                    a[i][j] = 1;
                else
                    a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
        return a;
    }
};
