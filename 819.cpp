class Solution {
public:
    string mostCommonWord(string s, vector<string>& banned) {
        unordered_set<string> st(banned.begin(), banned.end());
        unordered_map<string, int> mp;
        for (char& c : s) {
            if (isalpha(c)) c = tolower(c);
            else c = ' ';
        }
        stringstream ss(s);
        string word;
        int maxFreq = 0;
        string result = "";

        while (ss >> word) {
            if (!st.count(word)) {
                mp[word]++;
                if (mp[word] > maxFreq) {
                    maxFreq = mp[word];
                    result = word;
                }
            }
        }

        return result;
    }
};
