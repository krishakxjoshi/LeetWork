class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int mid= i + (j-i)/2;
            int k = mid;
            while(mid==k)k++;
            if(nums[k]>nums[mid])i=k;
            else if(nums[k]<nums[mid])j=k-1;
        }
        return i;
    }
};
