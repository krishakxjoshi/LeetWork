class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD=1e9+7;
        vector<long long> powers;
        long long currPower = 1;
        while(currPower<=n){
            if((n/currPower)%2 == 1) powers.push_back(currPower);
            currPower*= 2;
        }
        vector<int> ans;
        for(int idx=0;idx<(int)queries.size();idx++){
            int l= queries[idx].front();
            int r= queries[idx].back();
            long long prod=1;
            for(int i=l; i<=r; i++) prod = (prod*powers[i]) % MOD;
            ans.push_back((int) prod);
        }
        return ans;
    }
};