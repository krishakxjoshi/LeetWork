class Solution {
public:
    void build(int idx,int l, int r, vector<int>& baskets,vector<int>& segmenttree){
        if(l==r){
            segmenttree[idx]=baskets[l];
            return;
        }
        int mid = l + (r-l)/2;
        build(2*idx+1, l, mid, baskets, segmenttree);
        build(2*idx+2, mid+1, r, baskets, segmenttree); 
        segmenttree[idx]=max(segmenttree[2*idx+1], segmenttree[2*idx+2]);
    }

    bool querry(int idx,int l, int r,int fruit,vector<int>& segmenttree){
        if(segmenttree[idx] < fruit) return false;
        if(l == r){
            segmenttree[idx] = -1;
            return true;
        }

        int mid = l + (r-l)/2;
        bool placed = false;
        if(segmenttree[2*idx+1] >= fruit)
            placed = querry(2*idx+1, l, mid, fruit, segmenttree);
        else
            placed = querry(2*idx+2, mid+1, r, fruit, segmenttree);

        segmenttree[idx] = max(segmenttree[2*idx+1], segmenttree[2*idx+2]);
        return placed;
    }

    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = baskets.size();
        vector<int> segmenttree(4 * n, -1);
        build(0, 0, n - 1, baskets, segmenttree);

        int unplaced = 0;
        for(int i = 0; i < n; i++) {
            if(!querry(0, 0, n - 1, fruits[i], segmenttree))
                unplaced++;
        }
        return unplaced;
    }
};
