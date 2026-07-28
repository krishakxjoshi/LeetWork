class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int j=0,i=0,res=0,fin=INT_MAX;
        for(i=0;i<nums.size();i++){
            
            res+=nums[i];
            
            if(target<=res){
                while(target<=res){
                    if(fin>i-j+1)fin=i-j+1;
                    res-=nums[j];
                    j++;
                }
            }
            
        }
        if(fin==INT_MAX)return 0;
        return fin;
    }
};
