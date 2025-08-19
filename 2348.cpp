#include <vector>
using namespace std;

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        long long count = 0;
        for(int x : nums){
            if(x == 0){
                count++;
                res += count;
            } else {
                count = 0;
            }
        }
        return res;
    }
};
