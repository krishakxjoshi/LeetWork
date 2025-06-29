class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
       vector<int> arr=nums;
       vector<int> brr;
       sort(arr.begin(),arr.end());
       for(int i=nums.size()-k;i<nums.size();i++){
            brr.push_back(arr[i]);
       }  
       unordered_map<int,int>mp;
       for(int ele : brr){
        mp[ele]++;
       }
       brr.clear();
       for(int i=0;i<nums.size();i++){
        if(mp[nums[i]]!=0){brr.push_back(nums[i]);mp[nums[i]]--;}
       }
      return brr;
    }
};