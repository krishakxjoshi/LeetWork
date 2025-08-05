class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int retu=0;
        vector<int>flag(baskets.size(),1);
        for(int i=0;i<fruits.size();i++){
            bool placed=false;
            for(int j=0;j<baskets.size();j++){
                if(flag[j]==1 && baskets[j]>=fruits[i]){
                    flag[j]=0;
                    placed=true;
                    break;
                }
            }
            if(!placed)retu+=1;
        }
        return retu;
    }
};
