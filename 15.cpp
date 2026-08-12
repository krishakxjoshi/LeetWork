class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int j = nums.size() - 1;

        vector<vector<int>> ans;
        vector<int> res;

        while (i < nums.size() - 2) {

            // Skip duplicate i
            if (i > 0 && nums[i] == nums[i - 1]) {
                i++;
                continue;
            }

            int k = i + 1;
            j = nums.size() - 1;

            while (k < j) {

                int sum = nums[i] + nums[k] + nums[j];

                if (sum == 0) {

                    res.push_back(nums[i]);
                    res.push_back(nums[k]);
                    res.push_back(nums[j]);

                    ans.push_back(res);
                    res.clear();

                    k++;
                    j--;

                    // Skip duplicate k
                    while (k < j && nums[k] == nums[k - 1])
                        k++;

                    // Skip duplicate j
                    while (k < j && nums[j] == nums[j + 1])
                        j--;
                }
                else if (sum > 0) {
                    j--;
                }
                else {
                    k++;
                }
            }

            i++;
        }

        return ans;
    }
};
