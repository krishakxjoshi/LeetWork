class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int j = 0;
        int maxLen = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 0){
                k--;  
            }
            while(k < 0){
                if(nums[j] == 0) k++;  
                j++;
            }
            maxLen = max(maxLen, i - j + 1);
        }
        return maxLen;
    }
};
