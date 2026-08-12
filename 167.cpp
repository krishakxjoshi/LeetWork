class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i =0,j=nums.size()-1;
        while(j>i){
            int sum = nums[i]+nums[j];
            if(sum==target)break;
            else if(sum<target)i++;
            else if(sum>target)j--;
        }
        vector<int>res;
        res.push_back(i+1);
        res.push_back(j+1);
        return res;
    }
};
