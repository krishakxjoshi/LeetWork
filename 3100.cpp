#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxBottlesDrunk(int n, int e) {
        int count = n;
        while(n>=e){
            n-=e; n++;
            count++; e++;
        }
        return count;
    }
};
