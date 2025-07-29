
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution 
{
public:
    vector<int> smallestSubarrays(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> result(n);
        vector<int> latest(32, -1);

        for (int i = n - 1; i >= 0; --i) 
        {
            int farthest = i;
            for (int b = 0; b < 32; ++b) 
            {
                if ((nums[i] >> b) & 1) 
                {
                    latest[b] = i;
                }
                if (latest[b] != -1) 
                {
                    farthest = max(farthest, latest[b]);
                }
            }
            result[i] = farthest - i + 1;
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {4, 0, 5, 6, 3, 2};
    vector<int> ans = sol.smallestSubarrays(nums);
    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
