class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum = 0 , minc = -1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int target = sum-x ;
        if(target<0)return -1;
        int i=0,j=0;int slid_sum=0;
        while(j < nums.size()){
            
            slid_sum+=nums[j];
            j++;
               
            while(slid_sum > target){
                slid_sum-=nums[i];
                i++;
                
            }
            if(slid_sum==target){if(minc<j-i)minc=j-i;}

        }
        if(minc==-1)return -1;
        return nums.size()-minc;
    }
};
