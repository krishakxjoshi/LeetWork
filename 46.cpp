
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void permutations(vector<int>& nums, vector<vector<int>>& ans, int ind) {
        if (ind == nums.size()) {
            ans.push_back(nums);
            return;
        } else {
            for (int i = ind; i < nums.size(); i++) {
                swap(nums[i], nums[ind]);
                permutations(nums, ans, ind + 1);
                swap(nums[i], nums[ind]); // backtrack
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutations(nums, ans, 0);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3}; // example input
    vector<vector<int>> result = sol.permute(nums);

    cout << "Permutations:" << endl;
    for (const auto& permutation : result) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
