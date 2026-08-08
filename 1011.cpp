class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxwt=0,sumwt=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>maxwt)maxwt=weights[i];
            sumwt+=weights[i];
        }
        while(maxwt<=sumwt){
            int avgsum = maxwt + (sumwt-maxwt)/2,sum=0,daycount=1;
            for(int i=0;i<weights.size();i++){
                sum+=weights[i];
                if(sum>avgsum){i--;daycount++;sum=0;}
            }
            if(daycount>days)maxwt=avgsum+1;
            else sumwt=avgsum-1;
        }
        return maxwt;
    }
};
