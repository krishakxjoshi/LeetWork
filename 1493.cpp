#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0;
        int maxcount = 0;
        int no_zero = 0;
        int j = 0, i = 0;

        while (i < nums.size()) {
            if (nums[i] == 0) {
                no_zero++;
            }

            // shrink window when 2 zeros
            while (no_zero == 2) {
                if (nums[j] == 0) no_zero--;
                j++;
            }

            count = i - j + 1; 
            maxcount = max(maxcount, count);
            i++;
        }

        return maxcount - 1; // remove one element
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1,1,0,0,1,1,1,0,1};
    cout << sol.longestSubarray(nums) << endl; // expected output: 4
    return 0;
}