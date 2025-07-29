
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        int i = 0, j = 0, count = 0;
        while (i < players.size() && j < trainers.size()) {
            if (players[i] <= trainers[j]) {
                i++;
                j++;
                count++;
            } else {
                j++;
            }
        }
        return count;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> players = {4, 7, 9};
    vector<int> trainers = {8, 2, 5, 8};
    int result = sol.matchPlayersAndTrainers(players, trainers);
    cout << "Matched pairs: " << result << endl;
    return 0;
}
