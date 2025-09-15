#include <iostream>
#include <string>
#include <unordered_set>

class Solution {
public:
    int canBeTypedWords(std::string text, std::string broken) {
        // A hash set for efficient O(1) average time lookups
        std::unordered_set<char> brokenChars(broken.begin(), broken.end());
        
        int count = 0;
        bool canType = true;

        for (char c : text) {
            if (c == ' ') {
                // End of a word
                if (canType) {
                    count++;
                }
                // Reset for the next word
                canType = true;
            } else {
                // Check if the character is in the broken set
                if (brokenChars.count(c)) {
                    canType = false;
                }
            }
        }
        
        // Check the last word after the loop ends
        if (canType) {
            count++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    std::string text1 = "hello world";
    std::string broken1 = "ad";
    std::cout << "Number of words that can be typed: " << sol.canBeTypedWords(text1, broken1) << std::endl; // Expected output: 1 (world)

    std::string text2 = "leet code";
    std::string broken2 = "o";
    std::cout << "Number of words that can be typed: " << sol.canBeTypedWords(text2, broken2) << std::endl; // Expected output: 1 (leet)
    
    return 0;
}