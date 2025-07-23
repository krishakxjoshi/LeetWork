
#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int count=0;
        stack<char>st;
        if(y>x){
            for(char c: s){
                if(!st.empty()&&st.top()=='b' && c=='a'){
                    st.pop();
                    count+=y;
                }else{
                    st.push(c);
                }
            }
            stack<char>st2;
            while(!st.empty()){
                char u=st.top();st.pop();
                if(!st2.empty()&&st2.top()=='b'&& u=='a'){
                    st2.pop();
                    count+=x;
                }else{
                    st2.push(u);
                }
            }
        }else{
            for(char c : s){
                if(!st.empty()&&st.top()=='a'&& c=='b'){
                    st.pop();
                    count+=x;
                }else{
                    st.push(c);
                }
            }
            stack<char>st2;
            while(!st.empty()){
                char u=st.top(); st.pop();
                if(!st2.empty()&&st2.top()=='a' && u=='b'){
                    st2.pop();
                    count+=y;
                }else{
                    st2.push(u);
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    string s = "kbckbbaaeabsbalaababbjrbabbhajabbaagaqabazapgfbmbdabkajzbpabobaaaakaababbbbbaabrbbablfqaaaavabbbaabaaubbabblvaaacwbbxbcubaabmbabmraaabbzyabaakaabbpbbb";
    int x = 4;
    int y = 5;
    cout << "Maximum Gain: " << sol.maximumGain(s, x, y) << endl;
    return 0;
}
