class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>output;
        if(s.size()%k!=0){
            while(s.size()%k!=0){
                s+=fill;
            }
        }
        int i=0;
        while(i<s.size()){
            output.push_back(s.substr(i,k));
            i+=k;
        }
        return output;
    }
};