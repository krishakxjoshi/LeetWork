class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>st;
        int maxlen=0;
        for(int i=0;i<s.size();i++){
            st.clear();
            int len=1;
            st.insert(s[i]);
            for(int j=i+1;j<s.size();j++){
                if(st.find(s[j])!=st.end()){
                    break;
                }
                else{
                    len++;
                    st.insert(s[j]);
                }
            }
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};