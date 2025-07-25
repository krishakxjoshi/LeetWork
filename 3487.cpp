#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_set<int> st(nums.begin(), nums.end());
        int count = 0;
        for (int ele : st) {
            if (ele > 0) count += ele;
        }
        if (count == 0) {
            return nums.back();
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-3, -2, -1, 0, 1, 2, 3, 2};
    cout << "Max Sum: " << sol.maxSum(nums) << endl;
    return 0;
}
