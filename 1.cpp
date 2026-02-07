class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        int n=nums.size();
        int p=0,q=0;
       
        for(int i=0;i<n;i++){ 
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){for(int i=0;i<n;i++)nums.pop_back();nums.push_back(i);nums.push_back(j);return nums;}
                
            }
        } 
  return nums;  }

};


