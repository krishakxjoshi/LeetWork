#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    class Solution {
        public:
            vector<int> numberOfPairs(vector<int>& nums) {
                sort(nums.begin(),nums.end());
                int cout=0;
                for(int i=1;i<nums.size();i++){
                    if(nums[i]==nums[i-1]){nums[i]=-1;nums[i-1]=-1;cout++;}
                }
                int k=0;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]!=-1)k++;
                }
                vector<int>vec;
                vec.push_back(cout);
                vec.push_back(k);
                return vec;
            }
        };
}