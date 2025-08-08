class Solution {
public:
    void gen(vector<string>& i,string s,int op,int clo,int n){
        if(clo>op || op>n) return ;
    else if(clo==n){i.push_back(s);return ;}
    gen(i,s+'(',op+1,clo,n);
    gen(i,s+')',op,clo+1,n);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        gen(s,"",0,0,n);
        return s;
    }
};