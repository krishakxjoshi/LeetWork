class Solution {
public:
    char kthCharacter(int k) {
        int level = 0;
        while ((1 << level) < k) level++;

        int index = k - 1;
        int add = 0;

 
        while (level > 0) {
            int half = 1 << (level - 1);
            if (index >= half) {
                index -= half;
                add++; 
            }
            level--;
        }

        return 'a' + add;
    }
};