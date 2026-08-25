class Solution {
public:
    int func(int n, int m, char c){
        if(c=='+') return (n+m);
        if(c=='-') return (n-m);
        if(c=='*') return (n*m);
        return (n/m);
    }
    int evalRPN(vector<string>& tokens) {
        stack<string>num;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){num.push(tokens[i]);}
            else{
                if(num.size()<1)continue;
                char c = tokens[i][0];
                int m = stoi(num.top());
                num.pop();
                int n = stoi(num.top());
                num.pop();
                int s = func(n,m,c);
                num.push(to_string(s)); 
            }
        }
        return stoi(num.top());
    }
};
