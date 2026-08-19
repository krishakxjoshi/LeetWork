class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int sum=0;
        for(int i = 0;i<nums.size();i++){
            int k = nums[i];
            nums[i]=sum;
            sum+=k;
        }
        nums.push_back(sum);
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[nums.size()-1]-nums[i])return i-1;
        }
        return -1;
    }
};
