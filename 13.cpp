class Solution {
public:
    int priority(char c){
        int prio=0;
        if(c=='I')prio=1;
        else if(c=='V')prio=5;
        else if(c=='X')prio=10;
        else if(c=='L')prio=50;
        else if(c=='C')prio=100;
        else if(c=='D')prio=500;
        else if(c=='M')prio=1000;
        return prio;
    }
    int romanToInt(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(priority(s[i])>=priority(s[i+1]))ans+=priority(s[i]);
            else {
                if(i+1<s.size())ans+=(priority(s[i+1])-priority(s[i]));i++;
            }
        }
        return ans;
    }
};