#include<vector>
using namespace std;
class Solution {
public:
    int countHillValley(vector<int>& nums2) {
        vector<int> nums;
        for(int i=0;i<nums2.size();++i){
            if(i==0 || nums2[i]!=nums2[i-1])
            {
                nums.push_back(nums2[i]);
            }
        }
        int ans=0;
        for(int i=1;i<nums.size()-1;++i){
            if((nums[i]>nums[i-1] && nums[i]>nums[i+1])||(nums[i]<nums[i-1] && nums[i]<nums[i+1]))
            {
                ans++;
            }
        }
        return ans;
    }
};