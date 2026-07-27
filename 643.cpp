class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        for(int i = 0 ; i<k;i++){
            avg+=nums[i];
        }
        int j = 0;
        int max=avg;
        for(int i = k; i<nums.size(); i++,j++){
            
            max=max-nums[j];
            max=nums[i]+max;
            if(max>avg){avg=max;}

        }
        return (avg/k);
    }
};
