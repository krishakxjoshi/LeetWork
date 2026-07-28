class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty()) return 0;
        if (s.size() == 1) return 1;
        int count =0,k=0;
        for(int i=1;i<s.size();i++){
            for(int j=k;j<i;j++){
                if(s[i]==s[j]){
                    k=j+1;
                    break;
                }
                
            }
            count=max(count,i-k+1);
        }
        return count;
    }
};
