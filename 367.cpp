class Solution {
public:
    bool isPerfectSquare(int num) {
        int i=1;
        int j=num;
        while(i<=j){
            double mid = i+ (j-i)/2;
            if(mid*mid<num)i=mid+1;
            if(mid*mid>num)j=mid-1;
            if(mid*mid==num)return true;
        }
        return false;
    }
};
