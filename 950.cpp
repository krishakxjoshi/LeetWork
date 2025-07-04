class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        queue<int>q;
        queue<int>q2;
        for(int i=0;i<deck.size();i++){
            q2.push(i);
        }
        for(int i=0;q2.size()!=0;i++){
            if(i%2==0){q.push(q2.front());q2.pop();}
            else{
                int x = q2.front();
                q2.pop();
                q2.push(x);
            }
        }     
        sort(deck.begin(),deck.end());
        vector<int>result(n);
        int i=0;
        while(q.size()!=0){
            result[q.front()]=deck[i];
            i++;
            q.pop();
        }
        return result;
    }
};