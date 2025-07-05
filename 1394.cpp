class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>st(arr.begin(),arr.end());
        for( int ele : arr){
            mp[ele]++;
        }
        int max = 0;
        for(int ele : st){
            if(ele==mp[ele]){
                if(ele>max)max=ele;
            }
        }
        
        if(max==0)return -1;
        return max;
    }
};