class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int i=1,j=0,sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>j)j=nums[i];
        }
    while(i<=j){
    int mid = i + (j - i)/2;
        for(int i=0;i<nums.size();i++){
            int number = nums[i];
            if(number%mid==0)number=(number/mid);
            else number=(number/mid) + 1;
            sum+=number;
        }
    if(sum<=threshold)j=mid-1;
    if(sum>threshold)i=mid+1;
    
    sum=0;
    }
    return i;
    }
};
