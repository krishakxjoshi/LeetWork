class Solution {
public:
    bool isnotzero(int i){
        while(i>0){
            int n = i%10;
            if(n==0)return false;
            i/=10;
        }
        return true;
    } 
    vector<int> getNoZeroIntegers(int n) {
        int a,b;
        vector<int>arr;
        for(int i=1;i<n;i++){
            if(isnotzero(i)){
                for(int j = i; j<n;j++){
                    if(i+j==n && (isnotzero(j))){
                        a=i;b=j;break;
                    }
                }
            }
        }
        arr.push_back(a);
        arr.push_back(b);
        return arr;
    }
};