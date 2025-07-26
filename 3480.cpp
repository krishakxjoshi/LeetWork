
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubarrays(int n, vector<vector<int>>& conflictingPairs) {
        long long valid = 0;
        vector<vector<int>> conflictingpoint(n + 1);
        for (auto &p : conflictingPairs) {
            int a = min(p[0], p[1]);
            int b = max(p[0], p[1]);
            conflictingpoint[b].push_back(a);
        }
        int max = 0, secmax = 0;
        vector<long long> extra(n + 1);
        for (int end = 1; end <= n; end++) {
            for (int &u : conflictingpoint[end]) {
                if (u >= max) {
                    secmax = max;
                    max = u;
                } else if (u > secmax) {
                    secmax = u;
                }
            }
            valid += end - max;
            extra[max] += max - secmax;
        }
        return valid + *max_element(extra.begin(), extra.end());
    }
};
