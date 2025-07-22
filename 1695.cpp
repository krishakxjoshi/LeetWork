
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st;
        int j = 0, i = 0, sum = 0, maxSum = 0;
        while (i < nums.size()) {
            if (st.find(nums[i]) == st.end()) {
                sum += nums[i];
                st.insert(nums[i]);
                if (sum > maxSum) maxSum = sum;
                i++;
            } else {
                sum -= nums[j];
                st.erase(nums[j]);
                j++;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 2, 4, 5, 6}; // Sample input
    int result = sol.maximumUniqueSubarray(nums);
    cout << "Maximum sum of unique subarray: " << result << endl;
    return 0;
}
