class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extra) {
        priority_queue<pair<double,int>> pq;
        int n = classes.size();
        for(int i = 0; i < n; i++) {
            int up = classes[i][0], down = classes[i][1];
            double gain = (double)(up + 1) / (down + 1) - (double)up / down;
            pq.push({gain, i});
        }
        while(extra--) {
            auto p = pq.top(); pq.pop();
            int i = p.second;

            classes[i][0]++, classes[i][1]++;
            int up = classes[i][0], down = classes[i][1];

            double gain = (double)(up + 1) / (down + 1) - (double)up / down;
            pq.push({gain, i});
        }
        double ans = 0;
        for(int i = 0; i < n; i++) {
            ans += (double)classes[i][0] / classes[i][1];
        }
        return ans / n;
    }
};
