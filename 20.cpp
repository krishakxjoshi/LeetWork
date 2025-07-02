class Solution {
public:
    char reverse(char c){
        if(c==')')return '(';
        else if(c==']')return '[';
        else return '{';
    }
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' ||s[i]=='{')st.push(s[i]);
            else {
                if(st.size()==0 || reverse(s[i])!=st.top())return false;
                else st.pop();
            }
        }
        if(st.size()!=0)return false;
        return true;
    }
};