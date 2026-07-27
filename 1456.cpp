class Solution {
public:
    int maxVowels(string s, int k) {
        int maxcount=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u')maxcount++;
        }
        int j=0,count=maxcount;
        for(int i = k; i<s.size();i++,j++){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i'|| s[j]=='o'|| s[j]=='u')count--;
            if(s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u')count++;
            if(count>maxcount)maxcount=count;
        }
        return maxcount;
    }
};
