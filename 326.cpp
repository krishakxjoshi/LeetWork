#include <cmath>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)return false;
        float x = log(n)/log(3);
        if(pow(3,x)==n)return true;
        return false;
    }
};
