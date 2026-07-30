class Solution {
public:
    int minimumPushes(string s) {
        set<int>st;
        int count=0,push=1;
        for(int i=0;i<s.size();i++){
            
            st.insert(s[i]);
            count+=push;
            if(st.size()%8==0)push++;
        }
        return count;
    }
};
