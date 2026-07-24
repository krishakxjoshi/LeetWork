class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if(digits.size()==1){
            int f = digits[0];
            f++;
            digits.clear();
            while(f>0){
                digits.push_back(f%10);
                f/=10;
            }
            reverse(digits.begin(),digits.end());
        return digits;
        }
        int i = digits.size()-1;
        vector<int> result;
        for(i ; i>=0; i--){
            if (digits[i]==9)
                result.push_back(0);
            else{
                break;
            }
        }
        if(i<0) {result.push_back(1);reverse(result.begin(),result.end());return result;}
        int k=digits[i];
        k++;
        result.push_back(k);
        i--;
        for(i;i>=0;i--){
            result.push_back(digits[i]);
        }
        reverse(result.begin(),result.end());
        return result;
    }
    
};
