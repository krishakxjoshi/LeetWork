#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int maximum69Number(int num) {
        string str = to_string(num);
        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '6') {
                str[i] = '9';
                break;
            }
        }
        num = stoi(str);
        return num;
    }
};

int main() {
    Solution sol;
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = sol.maximum69Number(num);
    cout << "Maximum number after changing at most one 6 to 9: " << result << endl;

    return 0;
}