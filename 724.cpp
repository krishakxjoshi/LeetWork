class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>res;res.push_back(0);int sum=0;
        for(int i=1;i<=nums.size();i++){
            sum+=nums[i-1];
            res.push_back(sum);
                }
        for(int i=1;i<res.size();i++){
            if(res[i-1]==res[res.size()-1]-res[i])return i-1;
        }
        return -1;
    }
};
