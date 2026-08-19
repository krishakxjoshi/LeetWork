class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        mp[0] = 1;

        for(int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i-1];
        }

        int count = 0;

        for(int i = 0; i < nums.size(); i++) {

            int rem = nums[i] % k;
            rem = (rem + k) % k;

            if(mp.find(rem) != mp.end()) {
                count += mp[rem];
            }

            mp[rem]++;
        }

        return count;
    }
};
