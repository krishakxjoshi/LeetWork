#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<string> check;
        for (long long i = 1; i <= 1e9; i <<= 1) {
            string reg = to_string(i);
            sort(reg.begin(), reg.end());
            check.push_back(reg);
        }
        string str = to_string(n);
        sort(str.begin(), str.end());
        for (int i = 0; i < (int)check.size(); i++) {
            if (check[i] == str) return true;
        }
        return false;
    }
};
