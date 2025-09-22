#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        set<int>st;
        int maxcount=0,count=0;
        for(int x : nums){
            mp[x]++;
            st.insert(x);
        }
        for(int x : st){
            if(mp[x]>maxcount)maxcount=mp[x];
        }
        for(int x : st){
            if(mp[x]==maxcount)count+=maxcount;
        }
        return count;
    }
};