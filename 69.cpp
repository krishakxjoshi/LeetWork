class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        int j=x;
        while(i<=j){
            double mid=i+(j-i)/2;
            if(mid*mid<x)i=mid+1;
            if(mid*mid>x)j=mid-1;
            if(mid*mid==x)return mid;
        }
        return j;
    }
};
