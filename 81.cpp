class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int piv=nums.size()-1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){piv=i;break;}
        }
        if(target<nums[0]){
          int i=piv,j=nums.size()-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>=target)j=mid-1;
            else if(nums[mid]<=target)i=mid+1;
        }  
        }
        int i=0,j=piv;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>=target)j=mid-1;
            else if(nums[mid]<=target)i=mid+1;
        }
        
        
        return false;
    }
};
