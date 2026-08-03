class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = 0,mid;
        int j= nums.size()-1;
        bool flag = false;
        while(i<=j){
            mid = i + (j-i)/2;
            if(nums[mid]<target)i=mid+1;
            else if(nums[mid]>target)j=mid-1;
            else {flag=true;break;}
        }
        vector<int>vec;
        if(!flag){vec.push_back(-1);vec.push_back(-1);return vec;}
        int i_mid,j_mid;
        while(i<=mid){
            i_mid= i + (mid-i)/2;
            if(nums[i_mid]<target)i=i_mid+1;
            if(nums[i_mid]==target)mid=i_mid-1;
        }
        vec.push_back(i);mid=i;
        while(j>=mid){
            j_mid= mid + (j-mid)/2;
            if(nums[j_mid]>target)j=j_mid-1;
            if(nums[j_mid]==target)mid=j_mid+1;
        }
        vec.push_back(j);
        return vec;
    }
};
