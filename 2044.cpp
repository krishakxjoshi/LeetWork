
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxor = 0;

    int subs(vector<int>& nums, int idx, int cur) {
        int n = nums.size();
        if (idx == n) {
            if (cur == maxor) return 1;
            return 0;
        }
        int take = subs(nums, idx + 1, cur | nums[idx]);
        int nottake = subs(nums, idx + 1, cur);
        return take + nottake;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int max = 0;
        for (int i = 0; i < n; i++) {
            max |= nums[i];
        }
        maxor = max;
        return subs(nums, 0, 0);
    }
};
