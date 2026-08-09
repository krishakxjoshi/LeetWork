class Solution {
public:
    int minDays(vector<int>& bloom, int m, int k) {
        long long subj = 1LL*m*k;
        if(subj>bloom.size())return -1;
        int mindays = INT_MAX;
        int maxdays = 0;
        for(int i=0;i<bloom.size();i++){
            if(bloom[i]>maxdays)maxdays=bloom[i];
        }
        for(int i=0;i<bloom.size();i++){
            if(bloom[i]<mindays)mindays=bloom[i];
        }
        while(mindays<=maxdays){
            int mid = mindays + (maxdays - mindays)/2,n=0,add=0;
            for(int i = 0 ; i< bloom.size();i++){
                if(bloom[i]<=mid)add++;
                if(bloom[i]>mid) add=0;               
                if(add==k){n++;add=0;}
            }
            if(m<=n)maxdays=mid-1;
            else mindays=mid+1;
        }
        return mindays;
    }
};
