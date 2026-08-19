class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)nums[i]=-1;
        }
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i]+nums[i-1];
        }
        unordered_map<int,int>mp;
        mp[0]=-1;
        int ans=0,act=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if (mp.find(nums[i]) != mp.end()){
                ans=i-mp[nums[i]];
                if(ans>act)act=ans;
            }
            else {
                mp[nums[i]]=i;
            }
        }
        if(act==INT_MIN)return 0;
        return act;
    }
};
