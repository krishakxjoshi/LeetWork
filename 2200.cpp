class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> vec;
        vector<int> dec;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == key)
                vec.push_back(i);
        }
        int l = 0, j = 0;
        while (l < nums.size() && j < vec.size()) {
            if (l <= vec[j] || abs(vec[j] - l) <= k) {
                if (abs(vec[j] - l) <= k)
                    dec.push_back(l);
                l++;
            } else
                j++;
        }
        return dec;
    }
};
