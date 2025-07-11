class Solution {
public:
    bool isPalindrome(int x) {
        int m=x;
        double r=0;
        while(m>0){
            r=(r*10)+(m%10);
            m=m/10;
          
        }
        if(r==x)return 1;
        else return 0;
        
    }
};