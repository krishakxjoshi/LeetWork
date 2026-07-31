class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        vector<int> pFreq(26, 0);
        vector<int> window(26, 0);

        // Build frequency of p
        for (char c : p)
            pFreq[c - 'a']++;

        // Build first window
        for (int i = 0; i < p.size(); i++)
            window[s[i] - 'a']++;

        // Check first window
        if (window == pFreq)
            ans.push_back(0);

        // Slide the window
        for (int i = p.size(); i < s.size(); i++) {

            // Add new character
            window[s[i] - 'a']++;

            // Remove old character
            window[s[i - p.size()] - 'a']--;

            // Compare frequencies
            if (window == pFreq)
                ans.push_back(i - p.size() + 1);
        }

        return ans;
    }
};
