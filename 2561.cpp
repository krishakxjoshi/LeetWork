
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> b1, total;
        set<int> st;

        for (int i : basket1) {
            b1[i]++;
            total[i]++;
            st.insert(i);
        }

        for (int i : basket2) {
            total[i]++;
            st.insert(i);
        }

        vector<int> vec;
        for (auto& [key, val] : total) {
            if (val % 2 != 0) return -1;
            int avg = val / 2;
            if (b1[key] > avg) {
                int diff = b1[key] - avg;
                for (int i = 0; i < diff; i++) {
                    vec.push_back(key);
                }
            } else if (b1[key] < avg) {
                int diff = avg - b1[key];
                for (int i = 0; i < diff; i++) {
                    vec.push_back(key);
                }
            }
        }

        sort(vec.begin(), vec.end());
        int Min = *st.begin();
        long long ans = 0;

        for (int i = 0; i < vec.size() / 2; i++) {
            ans += min(vec[i], 2 * Min);
        }

        return ans;
    }
};
