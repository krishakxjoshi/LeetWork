class Solution {
public:
    int possibleStringCount(string word) {
        int count = 1;
        for(int i=0;i<word.size();i){  
            int j=i+1;
            char x = word[i];
            char y = word[j];
            while(x==y && j<word.size()){
                j++;
                y = word[j];
                count++;
            }
            i=j;

        }
        return count;
    }
};