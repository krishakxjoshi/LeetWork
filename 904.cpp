
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        if(n<=2) return n;
        int maxcount=0,i=0;
        while(i<n){
            int count=0,j=i;
            int first=fruits[j];
            while(j<n && fruits[j]==first){
                j++;
                count++;
            }
            int k=j;
            if(k>=n){
                maxcount=max(maxcount,count);
                break;
            }
            int second=fruits[k];
            while(k<n && (fruits[k]==first || fruits[k]==second)){
                k++;
                count++;
            }
            maxcount=max(maxcount,count);
            i=k-1;
            while(i>0 && fruits[i-1]==fruits[i]){
                i--;
            }
        }
        return maxcount;
    }
};
