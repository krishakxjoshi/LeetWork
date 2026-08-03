class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i=0;
        int j= letters.size()-1;
        while(i<=j){
            int mid = i + (j-i)/2;
            if(letters[mid]<=target)i=mid+1;
            else if(letters[mid]>target)j=mid-1;
        }
        if(i == letters.size())
            return letters[0];
        return letters[i];
    }
};
