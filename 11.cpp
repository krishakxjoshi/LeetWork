class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0,j=nums.size()-1,sum=-1;
        while(j>i){
            int currsum=min(nums[i],nums[j])*(j-i);
            if(currsum>sum)sum=currsum;
            if(nums[i]>nums[j])j--;
            else if(nums[i]<=nums[j])i++;
        }
        return sum;
    }
};
