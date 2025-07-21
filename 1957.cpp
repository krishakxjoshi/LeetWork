
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        char arr[n];
        for(int i=0;i<n;i++){
            arr[i]=s[i];
        }
        for(int i=0;i<n-2;i++){
            if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2])arr[i]='0';
        }
        s.clear();
        for(int i=0;i<n;i++){
            if(arr[i]!='0')s.push_back(arr[i]);
        }
        return s;
    }
};

int main() {
    Solution sol;
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "Fancy string: " << sol.makeFancyString(input) << endl;
    return 0;
}
